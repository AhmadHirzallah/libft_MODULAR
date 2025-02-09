#include "queue.h"

void *queue_front(const t_queue *q)
{
    const t_dlist_node *front;
    
    if (!q)
        return (NULL);
    front = dlist_front(q->list);
    if (front)
        return (front->data);
    return (NULL);
}
/*
void *queue_front(const t_queue *q)
{
    const t_dlist_node *front;
    
    if (!q)
        return (NULL);
    front = dlist_front(q->list);
    return (front ? front->data : NULL);
}
*/