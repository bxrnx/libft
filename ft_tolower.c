#include <stdio.h>
#include <unistd.h>

int ft_toupper (int c)
{
    if (c >= 65 && c <= 90)
       { c = c +32; 
        write (1, &c, 1);
       }
    else
        return(c);
}

int main()
{
    ft_toupper(78);
    return(0);
}