/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:57 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/18 19:43:40 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*prueba;

	prueba = (t_list *)malloc(sizeof(t_list));
	if (!prueba)
		return (NULL);
	prueba->content = (void *)content;
	return (prueba);
}
/*int main() {
    t_list *nuevoNodo = ft_lstnew((void *)42);
    if (nuevoNodo != NULL)
        printf("Contenido del nuevo nodo: %d\n", (int)nuevoNodo->content);
     else
        printf("Error al crear el nodo.\n");
}*/
