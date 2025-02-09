#include "dlist.h"

short dlist_insert_before(t_dlist *list, t_dlist_node *node, void *data)
{
    t_dlist_node *new_node;

    if (!node)
        return (-1);
    new_node = malloc(sizeof(t_dlist_node));
    if (new_node)
        return (-2);

    new_node->data = data;
    new_node->next = node;
    new_node->prev = node->prev;

    if (node->prev)
        node->prev->next = new_node;
    else
        list->head = new_node;
    
    node->prev = new_node;
    list->size++;

    return (0);
}
