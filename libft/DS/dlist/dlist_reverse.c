#include "dlist.h"

void dlist_reverse(t_dlist *list)
{
    t_dlist_node *current = list->head;
    t_dlist_node *temp;

    while (current)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    temp = list->head;
    list->head = list->tail;
    list->tail = temp;
}