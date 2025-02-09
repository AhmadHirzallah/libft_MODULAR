#include "stack.h"

t_stack *stack_create(void (*del)(void *))
{
    t_stack *s;
    
    s = malloc(sizeof(t_stack));
    if (!s)
        return (NULL);
    
    dlist_init(s, del);
    return (s);
}