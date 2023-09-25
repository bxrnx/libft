#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

void    *ft_calloc(size_t nelem, size_t longitud)
{
    size_t  tamaño_total;
    void    *str;
    char    *s;
    size_t  i;
    
    tamaño_total = nelem * longitud;
    str = malloc(tamaño_total);

    if (str == NULL)
        return NULL;
    i = 0;
    s = (char *)str;
    while (i < tamaño_total)
    {
        s[i] = 0;
        i++;
    }
    return(s);
}

int main()
{
    size_t nelem = 5;
    size_t longitud = sizeof(int);
    
    int *array = (int*)ft_calloc(nelem, longitud);
    
    if (array == NULL)
        {
            printf("la asignación de memoria falló\n");
            return 1;
        }
    printf("Puntero asignado por ft_calloc: %p\n", (void *)array);
    free (array);
    return (0);
}