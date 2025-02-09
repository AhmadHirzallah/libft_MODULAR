#include "dlist.h"

t_dlist_node *dlist_front(const t_dlist *list)
{
    return (list->head);
}