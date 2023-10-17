/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:49 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/17 18:14:39 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*gon;
	t_list	*aux;
	t_list	*auxgon;

	aux = lst;
	if (!(gon = malloc(sizeof(t_list))))
		return (0);
	auxgon = gon;
	while (aux)
	{
		auxgon->content = f(aux->content);
		if (!(auxgon->next = malloc(sizeof(t_list))))
			ft_lstclear(&aux, del);
		aux = aux->next;
		auxgon = auxgon->next;
	}
	return (gon);
}

/*int main() {
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
    ft_lstclear(&duplicated_list, del_int); // Se libera el contenido de la lista
     sduplicada

    return 0;
}*/