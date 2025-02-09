#include "stack.h"

size_t stack_size(const t_stack *s)
{
    return (dlist_size(s));
}

/*
size_t stack_size(const t_stack *s)
{
    return s ? dlist_size(s) : 0;
}
*/