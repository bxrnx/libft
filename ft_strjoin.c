/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:55:32 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 10:55:36 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	unsigned int i;
	unsigned int j;

	s3 = malloc(strlen(s1) + strlen(s2) + 1);
    if (!s3)
        return(NULL);
	strcpy(s3, s1);
    strcat(s3, s2);
    return s3;
}

/*int main()
{
	char s1[] = "Hey que tal ";
	char s2[] = "como tas";

	printf("%s\n", ft_strjoin(s1, s2));
	return 0;
}*/

