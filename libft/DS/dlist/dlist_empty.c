#include "dlist.h"

int dlist_empty(const t_dlist *list)
{
    return (list->size == 0);
}