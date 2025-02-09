#include "queue.h"

size_t queue_size(const t_queue *q)
{
    if (q)
        return (dlist_size(q->list));
    return (0);
}
/*
size_t queue_size(const t_queue *q)
{
    return (q ? dlist_size(q->list) : 0);
}
*/