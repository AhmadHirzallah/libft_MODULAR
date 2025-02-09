#include "dlist.h"

void dlist_del_node(t_dlist *list, t_dlist_node *node)
{
    if (node->prev)
        node->prev->next = node->next;
    if (node->next)
        node->next->prev = node->prev;
    if (list->del)
        list->del(node->data);
    free(node);
    list->size--;
}