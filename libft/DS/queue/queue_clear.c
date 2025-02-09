#include "queue.h"

void queue_clear(t_queue *q)
{
    if (q)
        dlist_clear(q->list);
}