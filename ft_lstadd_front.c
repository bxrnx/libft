void ft_lstadd_front(t_list **lst, t_list *new) {
    if (lst == NULL || new == NULL) {
        return;  // Verifica si lst o new son nulos
    }

    new->next = *lst; // El siguiente del nuevo nodo apunta al primer nodo actual

    *lst = new; // El inicio de la lista apunta ahora al nuevo nodo
}

/*int main() {
    // Ejemplo de uso de ft_lstadd_front
    t_list *list = NULL; // Inicializa una lista vacía

    // Creamos un nuevo nodo
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    new_node->content = "Nuevo nodo";
    new_node->next = NULL;

    // Agregamos el nuevo nodo al principio de la lista
    ft_lstadd_front(&list, new_node);

    // Verificamos que el nuevo nodo está al principio
    if (list != NULL) {
        printf("El primer elemento de la lista es: %s\n", (char *)list->content);
    }

    return 0;
}*/