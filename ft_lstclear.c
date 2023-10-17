/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:25:47 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/17 16:00:23 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*gon;
	t_list	*aux;

	if (!(aux = *lst))
		return ;
	while (aux)
	{
		gon = aux->next;
		del(aux->content);
		free(aux);
		aux = gon;
	}
	*lst = NULL;
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