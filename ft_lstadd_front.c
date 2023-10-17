/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:25:19 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/17 15:24:29 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int main() {
    // Ejemplo de uso de ft_lstadd_front
    t_list *list = NULL; // Inicializa una lista vacía

    // Creamos un nuevo nodo
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    new_node->content = "Nuevo nodo";
    new_node->next = NULL;

    // Agregamos el nuevo nodo al principio de la lista
    ft_lstadd_front(&list, new_node);

    // Verificamos que el nuevo nodo está al principio
    if (list != NULL) {
        printf("El primer elemento de la lista es: %s\n", (char *)list->content);
    }

    return 0;
}*/