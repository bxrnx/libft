#include <stdio.h>
#include <stddef.h>

int ft_memcmp (const void *s1, const void *s2, size_t n)
{
    const char *p2 = (char *) s2;
    const char *p1 = (char *) s1;
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
}

/*int main()
{
    char prop1[] = "deaze";
    char prop2[] = "deane";
    
    printf("%d", ft_memcmp(prop1, prop2,4));
}*/