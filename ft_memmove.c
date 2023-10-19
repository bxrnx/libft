/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:47:41 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/19 20:36:18 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*p1;
	const char	*p2;
	size_t		i;

	n = 0;
	i = 0;
	p1 = (char *)s1;
	p2 = (const char *)s2;
	if (p1 == p2 || n == 0)
		return (p1);
	if (p1 < p2 && p1 + n > p2)
	{
		p1 = p1 + n;
		p2 = p2 + n;                    //NO ENTIENDO EL CÓDIGO FUCK
		while (n--)
			*(--p1) = *(--p2);
	}
	else
	{
		while (n--)
			*p1++ = *p2++;
	}
	return (s1);
}
/*int main()
{
    char destino[] = "Mecago";
    char source[] = "Siokek";

    printf("%s", ft_memmove(destino, source, 6));
    return (0);
}*/