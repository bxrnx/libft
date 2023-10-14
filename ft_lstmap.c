#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
    if (lst == NULL || f == NULL) {
        return NULL;
    }

    t_list *new_list = NULL;
    t_list *current = lst;

    while (current != NULL) {
        void *new_content = f(current->content);
        if (new_content == NULL) {
            // Si la función 'f' devuelve NULL, liberar la nueva lista y salir
            ft_lstclear(&new_list, del);
            return NULL;
        }

        t_list *new_node = ft_lstnew(new_content);
        if (new_node == NULL) {
            // Si falla la reserva de memoria, liberar la nueva lista y salir
            ft_lstclear(&new_list, del);
            return NULL;
        }

        // Agregar el nuevo nodo a la lista resultante
        if (new_list == NULL) {
            new_list = new_node;
        } else {
            t_list *last = new_list;
            while (last->next != NULL) {
                last = last->next;
            }
            last->next = new_node;
        }

        current = current->next;
    }

    return new_list;
}

// Función de ejemplo para duplicar un entero (puede ser personalizada según el tipo de contenido)
void *duplicate_int(void *content) {
    int *value = (int *)content;
    if (value == NULL) {
        return NULL;
    }

    int *new_value = malloc(sizeof(int));
    if (new_value) {
        *new_value = *value;
    }

    return new_value;
}

// Función para liberar un entero (puede ser personalizada según el tipo de contenido)
void del_int(void *content) {
    if (content != NULL) {
        free(content);
    }
}

int main() {
    // Crear una lista de prueba con tres nodos con contenido entero
    t_list *head = ft_lstnew(NULL); // Lista vacía
    int data1 = 42;
    head->next = ft_lstnew(&data1);
    int data2 = 56;
    head->next->next = ft_lstnew(&data2);

    // Duplicar la lista
    t_list *duplicated_list = ft_lstmap(head->next, duplicate_int, del_int);

    // Imprimir la lista duplicada
    t_list *current = duplicated_list;
    while (current != NULL) {
        int *value = (int *)current->content;
        printf("%d -> ", *value);
        current = current->next;
    }
    printf("NULL\n");

    // Liberar la memoria
    ft_lstclear(&head, NULL); // No se libera el contenido de la lista original
    ft_lstclear(&duplicated_list, del_int); // Se libera el contenido de la lista duplicada

    return 0;
}