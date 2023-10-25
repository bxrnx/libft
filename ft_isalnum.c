/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:27:27 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/25 12:55:29 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || ((c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9')))
		return (1);
	return (0);
}
/*#include<stdio.h>

int main()
{
    char c = '3';
    printf("%d\n", ft_isalnum(c));
}*/