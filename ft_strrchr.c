#include <stdio.h>
char *ft_strrchr (const char *s, int c)
{
    char a = (char)c;
    int i;
    i = 0;
    
    while(s[i] != '\0')
        i++;
    while (i >= 0)
        {
            if (i >= 0)
                return(&s[i]);
            i--;
        }
        return('\0');
}

int main()
{
    const char array[] = "en velda tu tiene rasón";
    char b = 't';
    printf("%s",ft_strchr(array, b));
    return(0);
}