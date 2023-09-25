#include <stddef.h>
#include <stdlib.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0); 
}

/*#include<stdio.h>

int main()
{
    char c = 'a';
    printf("%d\n", ft_isalpha(c));
	return (0);
}*/