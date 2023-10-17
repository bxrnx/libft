/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:17 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/17 16:01:05 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
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