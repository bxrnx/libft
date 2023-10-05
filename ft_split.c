/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:24:17 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 10:24:56 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char **ft_split(char const *s, char c)
{
    int i = 0;
    int counter = 0;
    int start = 0;
    int end = 0;
    int j = 0;
    int len;

    while (s[i])
        {
            if (s[i] == c)
                counter++;
            i++
        }
    counter++;

    char **reservado = malloc(counter * sizeof(char*));

    if (reservado == NULL)
        return(NULL);
    i = 0;
    while (i < count)
    {
        while (s[end] != c && s[end] != '\0')
            end++;
        i++;
        
        len = end - start;
        reservado[i] = malloc((len+1) * sizeof(char));
        if (result[i] == NULL)
            return(NULL);
        strncpy(result[i], s + start, len);
        result[i][len] = '\0';
        start = end + 1;
        end = start;
    }

    reservado[counter -1] = NULL;
    return (reservado);
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