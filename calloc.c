#include<stdio.h>
#include<stddef.h>

void    *ft_calloc(size_t nelem, size_t longitud)
{
    size_t tamaño_total;
    void *str;
    char *s;
    size_t i;
    
    char *s = (char*)str;
    i = 0;
    tamaño_total = nelem * longitud;
    *str = malloc(tamaño_total);

    if(s == NULL)
        return NULL;
    while(i < tamaño_total)
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
    
    printf("s", ft_calloc(nelemm, longitud));
    int *array = (int*)calloc(nelem, longitud);
    return (0);
}