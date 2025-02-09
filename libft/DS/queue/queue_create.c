#include "queue.h"
#include <stdlib.h>

t_queue *queue_create(size_t max_size, void (*del)(void *))
{
    t_queue *q;
    
    q = malloc(sizeof(t_queue));
    if (!q)
        return (NULL);
    q->list = malloc(sizeof(t_dlist));
    if (!q->list)
    {
        free(q);
        return (NULL);
    }
    dlist_init(q->list, del);
    q->max_size = max_size;
    return (q);
}