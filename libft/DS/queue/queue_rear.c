#include "queue.h"

void *queue_rear(const t_queue *q)
{
    const t_dlist_node *rear;
    
    if (!q)
        return (NULL);
    rear = dlist_back(q->list);
    if (rear)
        return (rear->data);
    return (NULL);
}
/*
void *queue_rear(const t_queue *q)
{
    const t_dlist_node *rear;
    
    if (!q)
        return (NULL);
    rear = dlist_back(q->list);
    return (rear ? rear->data : NULL);
}
*/