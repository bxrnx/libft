/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:13:01 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/03 08:43:42 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int custom_abs(int num) {
    return (num < 0) ? -num : num;
}

char *itoa(int c) {
    int length = 0;
    int temp = c;

    if (c == 0) {
        length = 2;
    } else {
        if (c < 0) {
            length++;
            temp = -temp;
        }
        while (temp != 0) {
            temp /= 10;
            length++;
        }
    }
    char *str = (char *)malloc((length + 1) * sizeof(char));

    if (str == NULL) 
    {
        return(NULL);
    }
    char *current = str + length;

    *current = '\0';
    current--;
    if (c < 0) {
        current = str;
        *current = '-';
        c = -c; // Convierte el número a positivo
    }   
    current = (str + length) - 1;
    if (c == 0) {
        *current = '0';
    } else 
    {
        while (c != 0) 
        {
            *current = '0' + c % 10;
            c /= 10;
            current--;
        }
    }
    return str;
}
/*int main() {
    int num = -12345;
    char *str = itoa(num);

    printf("Número: %d\nCadena: %s\n", num, str);

    // ¡No olvides liberar la memoria cuando hayas terminado!
    free(str);

    return 0;
}*/