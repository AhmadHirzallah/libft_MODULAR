#include "stack.h"

void *stack_peek(const t_stack *s)
{
    const t_dlist_node *top;
    
    top = dlist_front(s);
    if (top)
        return (top->data);
    return (NULL);
}

/*
void *stack_peek(const t_stack *s)
{
    const t_dlist_node *top = dlist_front(s);
    return top ? top->data : NULL;
}
*/