#include "dlist.h"

void dlist_del_end(t_dlist *list)
{
    t_dlist_node *temp;

    if (!list->tail)
        return;

    temp = list->tail;
    list->tail = list->tail->prev;
    if (list->tail)
        list->tail->next = NULL;
    else
        list->head = NULL;
    
    dlist_delete_node(list, temp);
}