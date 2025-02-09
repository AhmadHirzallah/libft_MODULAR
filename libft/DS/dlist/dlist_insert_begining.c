#include "dlist.h"

short dlist_insert_begining(t_dlist *list, void *data)
{
    t_dlist_node *new_node;

    if (!list)
        return (-1);
    new_node = malloc(sizeof(t_dlist_node));
    if (!new_node)
        return (-1);
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = list->head;
    if (list->head)
        list->head->prev = new_node;
    else
        list->tail = new_node;
    list->head = new_node;
    list->size++;
    
    return (0);
}