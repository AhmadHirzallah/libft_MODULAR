#include "dlist.h"

void dlist_del_front(t_dlist *list)
{
    t_dlist_node *temp;

    if (!list->head)
        return;

    temp = list->head;
    list->head = list->head->next;
    if (list->head)
        list->head->prev = NULL;
    else
        list->tail = NULL;
    
    dlist_delete_node(list, temp);
}