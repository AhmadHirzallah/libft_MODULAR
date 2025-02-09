#include "stack.h"

short stack_push(t_stack *s, void *data)
{
    return (dlist_insert_begining(s, data));
}

/*
int stack_push(t_stack *s, void *data)
{
    return dlist_push_front(s, data) == 0 ? 0 : -1;
}
*/