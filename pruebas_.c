/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas_.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:55:14 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/24 15:12:12 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

long ft_len(int n)
{    
    int len;
    while(n > 0)
    {
        n = n / 10;
        len++;
    }
    return(len);
}

static char *ft_char(char *s, int n, int len)
{
    if (n < 0)
        len = 1;
    while(n > 0)
    {    s[len--] = 48 + (n % 10);
        n = n / 10;
    }
    return (s);
}

char *ft_itoa(int n)
{
    char *s;
    int len;

	len = 0;
	len = ft_len(n);
    s = (char *)malloc(sizeof(char) * (len + 1));
    if (!(s))
      return (NULL);
    s[len--] = '\0';
    if (n == 0)
        s[0] = '0';
    if (n < 0)
    {
        s[0] = '-';
        n = -n;
    }
    s = ft_char(s, n, len);
    return(s);
}
int main() {
    int num = -12345;
    char *str = ft_itoa(num);

    printf("Número: %d\nCadena: %s\n", num, str);

    // ¡No olvides liberar la memoria cuando hayas terminado!
    free(str);

    return 0;
}