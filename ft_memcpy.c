#include <stdio.h>

void    *ft_memcpy (void *s1, const void *s2, size_t n)
{
    char *p1 = (char *) s1;
    const char *p2 = (const char *) s2;
    size_t i;

    i = 0;
    while (i < n)
    {
        p1[i] = p2[i];
        i++;
    }
    p1[i] = '\0';
    return (p1);
}

int main()
{
    char destino[] = "Mecago";
    char source[] = "Siokek";

    printf("%s",ft_memcpy(destino, source, 6));
    return(0);
}