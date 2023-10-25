/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:54:00 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/25 13:23:54 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;

	len = ft_strlen (s) + 1;
	s2 = malloc(len);
	if (s2 == NULL)
		return (NULL);
	ft_memcpy (s2, s, len);
	return (s2);
}
/*int main()
{
    const char *array = "Hola buenas tardes"; // Utiliza 
	const char* para cadenas literales

    char *copia = strdup(array); // Almacena el resultado en una variable

    if (copia == NULL)
    {
        printf("La asignación de memoria falló\n");
        return 1;
    }
    printf("Copia de la cadena: %s", copia);
    free(copia); // Libera la memoria asignada por strdup
    return 0;
}*/