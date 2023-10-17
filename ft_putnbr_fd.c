/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:30:59 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/17 16:48:03 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n > 9 )
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
	else
	{
		c = '0' + n;
		write (fd, &c, 1);
	}
}
/*int main()
{
    int n = 4576;
    int fd = 1;
    ft_putnbr_fd(n, fd);
    return 0;
}*/