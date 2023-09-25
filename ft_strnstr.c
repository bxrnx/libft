#include <stdio.h>

int *ft_memcmp (const void *s1, const void *s2, size_t n)

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