#include "queue.h"

short queue_iter(t_queue *q, short (*f)(void *))
{
    t_dlist_node *current;

    if (!q || !f)
        return (-1);
    current = q->list->head;
    while (current)
    {
        if (f(current->data) != 0)
            return (1);
        current = current->next;
    }
    return (0);
}