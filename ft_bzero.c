void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*void	ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = str;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
}

#include <stdio.h>

int main()
{
	char array[20];
	ft_bzero(array, 5);

	printf("array: \"%s\"\n", array);
}*/
