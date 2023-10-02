/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:02:12 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 11:05:34 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_in_set(char c, const char *set) {
    return strchr(set, c) != NULL;
}

char *ft_strtrim(const char *s1, const char *set) {
    if (s1 == NULL || set == NULL) {
        return NULL; // Manejo de errores
    }

    // Encontrar el primer carácter no perteneciente a 'set' desde el principio
    int start = 0;
    while (s1[start] != '\0' && is_in_set(s1[start], set)) {
        start++;
    }

    // Encontrar el último carácter no perteneciente a 'set' desde el final
    int end = strlen(s1) - 1;
    while (end >= 0 && is_in_set(s1[end], set)) {
        end--;
    }

    // Calcular la longitud de la subcadena resultante
    int trim_len = end - start + 1;

    // Manejo de casos especiales
    if (trim_len <= 0) {
        char *result = (char *)malloc(1);
        if (result != NULL) {
            result[0] = '\0';
        }
        return result;
    }

    // Reservar memoria para la subcadena resultante y copiar los caracteres
    char *result = (char *)malloc(trim_len + 1);
    if (result != NULL) {
        strncpy(result, s1 + start, trim_len);
        result[trim_len] = '\0';
    }
    return result;
}
/*int main() {
    char str[] = "xxxnse que decirtexxx    ";
    char set[] = "x ";

    char *trimmed_str = ft_strtrim(str, set);
    if (trimmed_str != NULL) {
        printf("%s\n", trimmed_str);
        free(trimmed_str); // Liberar la memoria asignada
    } else {
        printf("Error: Memoria no asignada.\n");
    }

    return 0;
}*/