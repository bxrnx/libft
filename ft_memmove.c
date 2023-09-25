#include <stdio.h>

void    *ft_memmove(void *s1, const void *s2, size_t n)
{
    char *p1 = (char *)s1;
    const char *p2 = (const char *)s2;
    size_t i;

    i = 0;
    if (p1 == p2 || n == 0)
    {
        // No es necesario hacer nada si los punteros son iguales o n es cero.
        return p1;
    }

    if (p1 < p2 && p1 + n > p2)
    {
        // Hay solapamiento y s2 se encuentra después de s1.
        // Copiamos de derecha a izquierda para evitar sobreescritura prematura.
        p1 = p1 + n;
        p2 = p2 + n;
        while (n--)
        {
            *(--p1) = *(--p2);
        }
    }
    else
    {
        // No hay solapamiento o s2 se encuentra antes de s1.
        // Copiamos de izquierda a derecha de manera normal.
        while (n--)
        {
            *p1++ = *p2++;
        }
    }

    return s1;
}

int main()
{
    char destino[] = "Mecago";
    char source[] = "Siokek";

    printf("%s", ft_memmove(destino, source, 6));
    return (0);
}