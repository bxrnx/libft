#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	void	*str;
	char	*s2;
	int	i;

	i = 0;
	while (s[i])
		i++;
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	s2 = (char *)str;

	while (s2[i] && s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main()
{
    const char *array = "Hola buenas tardes"; // Utiliza const char* para cadenas literales

    char *copia = strdup(array); // Almacena el resultado en una variable

    if (copia == NULL)
    {
        printf("La asignación de memoria falló\n");
        return 1;
    }
    printf("Copia de la cadena: %s", copia);
    free(copia); // Libera la memoria asignada por strdup
    return 0;
}