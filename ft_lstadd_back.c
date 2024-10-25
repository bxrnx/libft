/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:24:49 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/18 18:28:09 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temporal;

	temporal = (*lst);
	if ((*lst))
	{
		while (temporal->next != NULL)
			temporal = temporal->next;
		temporal->next = new;
	}
	if (!(*lst))
		((*lst) = new);
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