/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:56:13 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/18 19:50:23 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	return (i + j);
}

/*int main()
{
	char	destino[] = "Salgo ";
	char	source[] = "pa la calle";
	size_t	concated = ft_strlcat(destino, source, 15);
	printf ("se han concatenado %zu caracteres: %s\n", concated, destino);
}*/