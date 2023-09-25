size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (j < i && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
/*int main()
{
    char destino[] = "hola";
    char source[] = "adios";
	size_t copied = ft_strlcpy(destino, source, 9);
    printf("Copied %zu characters: %s\n", copied, destino);
}*/