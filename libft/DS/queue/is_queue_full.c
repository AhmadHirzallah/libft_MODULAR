#include "queue.h"

short is_queue_full(const t_queue *q)
{
    if (!q)
        return (1);
    if ((q->max_size > 0) && (queue_size(q) >= q->max_size))
        return (1);
    return (0);
}

/*
short is_queue_full(const t_queue *q)
{
    return (q ? (q->max_size > 0 && queue_size(q) >= q->max_size) : 1);
}
*/