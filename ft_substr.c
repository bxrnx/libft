/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:01:52 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/20 18:45:44 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = NULL;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || (!str))
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	while (len--)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
    char string[] = "Hey wasssup";
    unsigned int num = 4;
    size_t len = 20;
    
    printf("%s\n", ft_substr(string, num, len));
}*/