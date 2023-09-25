size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	return (i + j);
}

/*int main()
{
	char	destino[] = "Salgo ";
	char	source[] = "pa la calle";
	size_t	concated = ft_strlcat(destino, source, 15);
	printf ("se han concatenado %zu caracteres: %s\n", concated, destino);
}*/