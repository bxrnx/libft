/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemelend <bemelend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:28:01 by bemelend          #+#    #+#             */
/*   Updated: 2023/10/16 15:28:02 by bemelend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_strnstr (const void *s1, const void *s2, size_t n)

char p2 = (char *) s2;
char p1 = (char *) p2;
size_t i;

i = 0;
if (p1 == p2)
    return (0);
while((p1[i] && p2[i]) && i < n)
{
    if (p1[i] < p2[i])
        return (-1);
    else if (p1[i] > p2[i])
        return (1);
    i++;
}