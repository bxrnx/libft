/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:27:31 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/26 15:46:13 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	numstring(char const *s1, char c)
{
	int	comp;
	int	cles;

	comp = 0;
	cles = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			cles = 0;
		else if (cles == 0)
		{
			cles = 1;
			comp++;
		}
		s1++;
	}
	return (comp);
}

static int	numchar(char const *s2, char c, int i)
{
	int	lenght;

	lenght = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		lenght++;
		i++;
	}
	return (lenght);
}

static char	**freee(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char	**affect(char const *s, char **dst, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * numchar(s, c, i) + 1);
		if (dst[j] == NULL)
			return (freee((char const **)dst, j));
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		l;

	if (s == NULL)
		return (NULL);
	l = numstring(s, c);
	dst = (char **)malloc(sizeof(char *) * (l + 1));
	if (dst == NULL)
		return (NULL);
	return (affect(s, dst, c, l));
}
/*int main() {
    const char *s = "Hola|Mundo|Ejemplo";
    char **substrings = splitString(s, '|');
    
    int i = 0;
    while (substrings[i] != NULL) {
        printf("%s\n", substrings[i]);
        free(substrings[i]); // Libera la memoria de cada subcadena
        i++;
    }
    
    free(substrings); // Libera la memoria del array de strings
    
    return 0;
}*/