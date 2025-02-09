#include "queue.h"

short enqueue(t_queue *q, void *data)
{
    if (!q || is_queue_full(q))
        return (-1);
    return (dlist_insert_end(q->list, data));
}