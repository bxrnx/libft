/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:46:32 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/17 16:36:15 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;
	size_t		i;

	i = 0;
	p1 = (char *) s1;
	p2 = (const char *) s2;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	p1[i] = '\0';
	return (p1);
}

/*int main()
{
    char destino[] = "Mecago";
    char source[] = "Siokek";

    printf("%s",ft_memcpy(destino, source, 6));
    return(0);
}*/