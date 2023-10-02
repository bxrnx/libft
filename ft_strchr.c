/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:52:40 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 10:53:43 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strchr (const char *s, int c)
{
    char a = (char)c;
    int i;
    i = 0;

    while (s[i])
        {
            if ( s[i] == a)
                return(&s[i]);
            i++;
        }
        return('\0');
}

int main()
{
    const char array[] = "en velda tu tiene rasón";
    char b = 't';
    printf("%s",ft_strchr(array, b));
    return(0);
}