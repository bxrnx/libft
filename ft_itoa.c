/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:13:01 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 15:15:36 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*itoa (int n)
{
	size_t lenght;
	size_t temp;
	char str*;
	size_t isnegative;
	char* current;
	int num;

	isnegative = 0;
	lenght = 0;
	temp = n;
	if (c == 0)
		lenght = 2;
	else
	{
		if (c < 0)
		{
			isnegative = 1;
			temp = -temp;
		}
		while (temp != 0)
		{
			temp = temp / 10;
			lenght++;
		}
		lenght = lenght + isnegative;
		lenght++;
	}
	str = malloc(lenght * sizeof(char));

	if (str == NULL)
		return(NULL);
	current = str;
	if (isnegative)
		{
			*current = '-';
			*current++;
		}
		num = c;
	while (num != 0)
	{
		*current = '0' + num % 10;
		num = num / 10;
		*current++;
	}
	*current = '\0';
	char *start = str;
	char *end = current - 1;
	while (start < end)
	{
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
	}
	return str;
}

int main() {
    int num = -12345;
    char *str = itoa(num);

    printf("Número: %d\nCadena de números: %s\n", num, str);
    free(str);
    return 0;
}