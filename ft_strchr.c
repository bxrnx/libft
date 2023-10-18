/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:52:40 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/18 19:00:38 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	i = 0;
	a = (char)c;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*int main()
{
    const char array[] = "en velda tu tiene rasón";
    char b = 't';
    printf("%s",ft_strchr(array, b));
    return(0);
}*/