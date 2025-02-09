#include "stack.h"

void stack_clear(t_stack *s)
{
    if (s)
        dlist_clear(s);
}