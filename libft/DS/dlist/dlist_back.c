#include "dlist.h"

t_dlist_node *dlist_back(const t_dlist *list)
{
    return (list->tail);
}