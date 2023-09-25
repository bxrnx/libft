int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0); 
}

/*#include<stdio.h>

int main()
{
    char c = '3';
    printf("%d\n", ft_isdigit(c));
}*/