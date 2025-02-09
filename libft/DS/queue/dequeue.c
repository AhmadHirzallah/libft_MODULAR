#include "queue.h"

void *dequeue(t_queue *q)
{
    void *data;
    
    if (!q || is_queue_empty(q))
        return (NULL);
    data = queue_front(q);
    dlist_del_front(q->list);
    return (data);
}
