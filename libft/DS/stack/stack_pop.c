#include "stack.h"

void *stack_pop(t_stack *s)
{
    void *data;

    if (!s || is_stack_empty(s))
        return (NULL);
    data = stack_peek(s);
    if (data)
        dlist_del_front(s);
    return (data);
}