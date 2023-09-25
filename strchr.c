#include <stdio.h>
char *ft_strchr (const char *s, int c)
{
    char a = (char)c;
    int i;
    i = 0;

    while (s[i])
        {
            if ( s[i] == a)
                return(&s[i]);
            i++;
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