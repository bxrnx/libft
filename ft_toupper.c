#include <stdio.h>
#include <unistd.h>

int ft_toupper (int c)
{
    if (c >= 97 && c <= 122)
       { c = c -32; 
        write (1, &c, 1);
       }
    else
        return(c);
}

int main()
{
    ft_toupper(105);
    return(0);
}