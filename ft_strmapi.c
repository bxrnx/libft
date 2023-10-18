/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:06:18 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/18 19:30:23 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	funcionx(unsigned int num, char c)
{
	if (num % 2 == 0)
		return (ft_toupper(c));
	else
		return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	str = malloc(len + 1);
	len = ft_strlen(s);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
    char str[] = "Hola que tal";
    char *strout = ft_strmapi(str, funcionx);

    if (strout != NULL)
    {
        printf("%s", strout);
        free(strout);
    }
    else
    {
        printf("Error: No se pudo asignar memoria.\n");
    }

    return 0;
}*/
