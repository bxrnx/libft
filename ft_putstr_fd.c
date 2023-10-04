/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:47:57 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 10:22:27 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char* s, int fd)
{
    int i = 0;
    
    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
int main()
{
    char c[] = "Anasheee";
    int fd = 1;

    ft_putchar_fd(c, fd);
    return 0;
}