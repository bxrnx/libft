int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
   #include<stdio.h>
  #include<unistd.h>
  
  int main()
{
    char mistring [] = "hola, mundo";
    int lenght = ft_strlen(mistring);

    printf("%d\n", lenght);

    return (0);
}*/