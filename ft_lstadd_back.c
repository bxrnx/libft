#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new) {
    if (lst == NULL || new == NULL) {
        return; // Verificar que los argumentos no sean nulos
    }

    if (*lst == NULL) {
        // Si la lista está vacía, el nuevo nodo se convierte en el primer nodo
        *lst = new;
    } else {
        // Si la lista no está vacía, recorremos la lista hasta llegar al último nodo
        t_list *current = *lst;
        while (current->next != NULL) {
            current = current->next;
        }
        // Conectamos el nuevo nodo al final de la lista
        current->next = new;
    }
}
/*int main() {
    // Crear una lista de prueba con tres nodos
    t_list *head = malloc(sizeof(t_list));
    head->data = 1;
    head->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    node2->data = 2;
    node2->next = NULL;

    t_list *node3 = malloc(sizeof(t_list));
    node3->data = 3;
    node3->next = NULL;

    // Agregar nodos a la lista
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    // Imprimir la lista resultante
    t_list *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Liberar la memoria
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/