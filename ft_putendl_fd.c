/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:50:44 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/02 10:51:03 by bemelend         ###   ########.fr       */
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
    write (fd, "\n", 1);
}
int main()
{
    char c[] = "Anasheee";
    int fd = 1;

    ft_putchar_fd(c, fd);
    return 0;
}