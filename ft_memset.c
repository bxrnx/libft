/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:50:44 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 10:51:03 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = str;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
}

/*#include <stdio.h>

int main()
{
	char array[20];
	ft_memset(array, 'a', 5);

	printf("array: \"%s\"\n", array);
}*/