int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include<stdio.h>

int main()
{
    char c = '3';
    printf("%d\n", ft_isprint(c));
}*/