/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:01:52 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/18 15:21:28 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	size_t			i;
	char			*subs;

	i = 0;
	while (s[i])
		i++;
	len = i;
	subs = malloc((len - start) + 1);
	if (!subs)
		return (NULL);
	j = 0;
	while (s[start] && start < len)
	{
		subs[j] = s[start];
		start++;
		j++;
	}
	subs[j] = '\0';
	return (subs);
}
/*int main()
{
    char string[] = "Hey wasssup";
    unsigned int num = 4;
    size_t len = 20;
    
    printf("%s\n", ft_substr(string, num, len));
}*/