#include "dlist.h"

void dlist_foreach_on_data(t_dlist *list, void (*f)(void *))
{
    t_dlist_node *current = list->head;

    while (current)
    {
        f(current->data);
        current = current->next;
    }
}