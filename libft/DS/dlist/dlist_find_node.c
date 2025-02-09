#include "dlist.h"

t_dlist_node *dlist_find_node(const t_dlist *list, const void *data,
                            int (*cmp)(const void *, const void *))
{
    t_dlist_node *current = list->head;

    while (current)
    {
        if (cmp(current->data, data) == 0)
            return (current);
        current = current->next;
    }
    return (NULL);
}