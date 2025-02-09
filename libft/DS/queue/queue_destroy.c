#include "queue.h"
#include <stdlib.h>

void queue_destroy(t_queue *q)
{
    if (!q)
        return;
    dlist_clear(q->list);
    free(q->list);
    free(q);
}