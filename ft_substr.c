/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:01:52 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/25 17:47:20 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	size = ft_strlen(s);
	if (size <= start)
		return (ft_strdup(""));
	if (size - start < len)
		len = size - start;
	substr = (char *)malloc (len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*int main()
{
    char string[] = "Hey wasssup";
    unsigned int num = 4;
    size_t len = 20;
    
    printf("%s\n", ft_substr(string, num, len));
}*/