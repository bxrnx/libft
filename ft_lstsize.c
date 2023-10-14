#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *p;
    int i; 

    i = 0;
    p = lst;
    while (p != NULL)
    {
        i++;
        p = p->next;
    }
    return(i);
}

int main()
{
    t_list node1;
    t_list node2;
    t_list node3;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    printf ("%d\n", ft_lstsize(&node1));
    return 0;
}