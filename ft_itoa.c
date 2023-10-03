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

    // Calcula la longitud de la cadena necesaria
    if (c == 0) {
        length = 2; // "0" y el carácter nulo '\0'
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
    // Reserva memoria dinámica para la cadena
    char *str = (char *)malloc((length + 1) * sizeof(char)); // +1 para el carácter nulo '\0'

    if (str == NULL) {
        perror("malloc");
        exit(1);
    }
    char *current = str + length; // Apunta al final de la cadena

    // Agrega el carácter nulo al final
    *current = '\0';
    current--;
    // Agrega el signo negativo si es necesario
    if (c < 0) {
        current = str;
        *current = '-';
        c = -c; // Convierte el número a positivo
    }
    
    current = (str + length) - 1;
    // Convierte el entero en una cadena
    if (c == 0) {
        *current = '0';
    } else {
        // Rellena la cadena con dígitos
        while (c != 0) {
            *current = '0' + c % 10;
            c /= 10;
            current--;
        }
    }

    return str;
}

int main() {
    int num = -12345;
    char *str = itoa(num);

    printf("Número: %d\nCadena: %s\n", num, str);

    // ¡No olvides liberar la memoria cuando hayas terminado!
    free(str);

    return 0;
}