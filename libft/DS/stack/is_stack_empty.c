#include "stack.h"

short   is_stack_empty(const t_stack *s)
{
    return (is_dlist_empty(s));
}
/*
int is_stack_empty(const t_stack *s)
{
    return s ? is_dlist_empty(s) : 1;
}
*/