/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:27:34 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/03 13:19:07 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void funciony(char *c)
{
    if (*c >= 'a' && *c <= 'z' || *c >= 'A' && *c <= 'Z')
	{
        *c = toupper(*c);
    }
}

void ft_striteri(char *s, void (*f)(char*)) {
    unsigned int i = 0;
    while (s[i])
	{
        f(&s[i]);
        i++;
    }
}

/*int main() {
    char str[] = "en velda tengo 34 años brr";

    printf("Cadena original: %s\n", str);

    ft_striteri(str, funciony);

    printf("Cadena modificada: %s\n", str);
    return 0;
}*/