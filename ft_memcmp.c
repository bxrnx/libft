/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:37:05 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/18 19:09:46 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p2;
	const char	*p1;
	size_t		i;

	i = 0;
	p2 = (char *) s2;
	p1 = (char *) s1;
	while ((p1[i] && p2[i]) && i < n)
	{
		if (p1[i] < p2[i])
			return (-1);
		else if (p1[i] > p2[i])
			return (1);
		i++;
	}
	return (0);
}

/*int main()
{
    char prop1[] = "deaze";
    char prop2[] = "deane";
    
    printf("%d", ft_memcmp(prop1, prop2,4));
}*/