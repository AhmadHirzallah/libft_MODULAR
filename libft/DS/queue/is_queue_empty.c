#include "queue.h"

short is_queue_empty(const t_queue *q)
{
    if (!q)
        return (1);
    
    if (is_dlist_empty(q->list))
        return (1);
    return (0);
}
/*
short is_queue_empty(const t_queue *q)
{
    return (q ? dlist_empty(q->list) : 1);
}
*/
