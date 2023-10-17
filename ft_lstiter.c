/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:31 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/17 16:01:26 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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