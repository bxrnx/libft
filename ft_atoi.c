/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:47:57 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/20 18:22:12 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resultado;
	int	signo;
	int	i;

	i = 0;
	resultado = 0;
	signo = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signo = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		signo = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + (str[i] - 48);
		i++;
	}
	return (resultado * signo);
}
/*
int main(void)
{
	const char	num[] = "--1234";
	printf("el número es : %d\n", ft_atoi(num));
}*/