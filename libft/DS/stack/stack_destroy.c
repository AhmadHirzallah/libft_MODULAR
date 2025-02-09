#include "stack.h"

void stack_destroy(t_stack *s)
{
    if (!s)
        return;

    dlist_clear(s);
    if (s)
        free(s);
}