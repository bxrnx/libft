/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:27:40 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 10:28:25 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_node = (t_list *)malloc(sizeof * t_list);

    if(!(*new_node))
        return NULL;
    
    new_node->content = content;
    new_node->content = NULL;
    return (new_node);
}

/*int main() {
    t_list *nuevoNodo = ft_lstnew((void *)42);
    if (nuevoNodo != NULL)
        printf("Contenido del nuevo nodo: %d\n", (int)nuevoNodo->content);
     else
        printf("Error al crear el nodo.\n");
}*/