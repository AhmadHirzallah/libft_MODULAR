#include "dlist.h"

void dlist_clear(t_dlist *list)
{
    if (!list)
        return ;
    while (list->head)
        dlist_del_front(list);
}