#include <stdlib.h>

typedef struct nodo {
    void *content;
    struct  *nodo;
} estructura;

t_list *ft_lstnew(void *content) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list)); // Asignar memoria para el nuevo nodo
    if (new_node == NULL) {
        return NULL; // En caso de error de asignación de memoria
    }
    new_node->content = content; // Inicializar el contenido del nodo con el parámetro 'content'
    new_node->next = NULL; // Inicializar 'next' con NULL
    return new_node; // Devolver el nuevo nodo creado
}
