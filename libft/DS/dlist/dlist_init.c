#include "dlist.h"

void dlist_init(t_dlist *list, void (*del)(void *))
{
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    list->del = del;
}