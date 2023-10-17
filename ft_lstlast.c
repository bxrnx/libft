/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:43 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/17 16:02:52 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	if (p == NULL || lst == NULL)
		return (NULL);
	if (p->next == NULL)
		return (p);
	while (p)
	{
		if (p->next == NULL)
			return (p);
		p = p->next;
	}
	return (p);
}

/*int main()
{
    // Crear una lista enlazada de ejemplo con tres nodos
    t_list node1, node2, node3;
    node1.content = "Nodo 1";
    node1.next = &node2;

    node2.content = "Nodo 2";
    node2.next = &node3;

    node3.content = "Nodo 3";
    node3.next = NULL;

    // Obtener el último nodo de la lista
    t_list *ultimoNodo = ft_lstlast(&node1);

    // Imprimir el contenido del último nodo
    if (ultimoNodo != NULL) {
        printf("El contenido del último nodo es: 
        %s\n", (char *)ultimoNodo->content);
    } else {
        printf("La lista está vacía.\n");
    }

    return 0;
}*/