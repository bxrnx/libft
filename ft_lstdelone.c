/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:17 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/16 15:26:21 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *)) {
    if (lst == NULL || del == NULL) {
        return; // Verificar que los argumentos no sean nulos
    }

    // Llamar a la función 'del' para liberar el contenido del nodo
    del(lst->content);

    // Liberar el nodo en sí
    free(lst);
}

// Función para liberar un entero (puede ser personalizada según el tipo de contenido)
void del_int(void *content) {
    if (content != NULL) {
        free(content);
    }
}
/*int main() {
    // Crear un nodo de prueba con contenido entero
    t_list *node = malloc(sizeof(t_list));
    int *data = malloc(sizeof(int));
    *data = 42;
    node->content = data;
    node->next = NULL;

    // Llamar a ft_lstdelone para liberar el nodo y su contenido
    ft_lstdelone(node, del_int);

    // Verificar que el nodo y su contenido se han liberado correctamente
    if (node == NULL) {
        printf("El nodo se ha liberado correctamente.\n");
    } else {
        printf("Error: El nodo no se ha liberado correctamente.\n");
    }

    return 0;
}*/