/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:25:47 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/16 15:25:59 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {
    if (lst == NULL || del == NULL) {
        return; // Verificar que los argumentos no sean nulos
    }

    t_list *current = *lst;
    while (current != NULL) {
        t_list *next = current->next;

        // Llamar a la función 'del' para liberar el contenido del nodo
        del(current->content);

        // Liberar el nodo en sí
        free(current);

        current = next;
    }

    // Establecer el puntero a la lista en NULL
    *lst = NULL;
}

// Función para liberar un entero (puede ser personalizada según el tipo de contenido)
void del_int(void *content) {
    if (content != NULL) {
        free(content);
    }
}
/*int main() {
    // Crear una lista de prueba con tres nodos con contenido entero
    t_list *head = malloc(sizeof(t_list));
    int *data1 = malloc(sizeof(int));
    *data1 = 42;
    head->content = data1;
    head->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    int *data2 = malloc(sizeof(int));
    *data2 = 56;
    node2->content = data2;
    node2->next = NULL;

    t_list *node3 = malloc(sizeof(t_list));
    int *data3 = malloc(sizeof(int));
    *data3 = 72;
    node3->content = data3;
    node3->next = NULL;

    // Conectar los nodos
    head->next = node2;
    node2->next = node3;

    // Llamar a ft_lstclear para liberar la lista completa
    ft_lstclear(&head, del_int);

    // Verificar que la lista se ha liberado correctamente
    if (head == NULL) {
        printf("La lista se ha liberado correctamente.\n");
    } else {
        printf("Error: La lista no se ha liberado correctamente.\n");
    }

    return 0;
}*/