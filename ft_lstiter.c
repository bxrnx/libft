#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *)) {
    if (lst == NULL || f == NULL) {
        return; // Verificar que los argumentos no sean nulos
    }

    // Iterar a través de la lista y aplicar la función 'f' en el contenido de cada nodo
    t_list *current = lst;
    while (current != NULL) {
        f(current->content);
        current = current->next;
    }
}

// Función de ejemplo para imprimir un entero (puede ser personalizada según el tipo de contenido)
void print_int(void *content) {
    int *value = (int *)content;
    if (value != NULL) {
        printf("%d\n", *value);
    }
}

/*int main() {
    // Crear una lista de prueba con tres nodos con contenido entero
    t_list *head = malloc(sizeof(t_list));
    int data1 = 42;
    head->content = &data1;
    head->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    int data2 = 56;
    node2->content = &data2;
    node2->next = NULL;

    t_list *node3 = malloc(sizeof(t_list));
    int data3 = 72;
    node3->content = &data3;
    node3->next = NULL;

    // Conectar los nodos
    head->next = node2;
    node2->next = node3;

    // Llamar a ft_lstiter para imprimir el contenido de la lista
    ft_lstiter(head, print_int);

    return 0;
}*/