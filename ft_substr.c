#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int j;
    size_t i = 0;
    char *subs;

    while(s[i])
        i++;
    len = i;
    subs = malloc((len - start) + 1);
    if(!subs)
        return(NULL);
    j = 0;
    while(s[start] && start < len)
        {
          subs[j] = s[start];
          start++;
          j++;
        }
    subs[j] = '\0';
    return(subs);

}

int main()
{
    char string[] = "Hey wasssup";
    unsigned int num = 4;
    size_t len = 20;
    
    printf("%s\n", ft_substr(string, num, len));
}