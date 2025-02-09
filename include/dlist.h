#ifndef DLIST_H
# define DLIST_H

# include <stdlib.h>
# include <stddef.h>


typedef struct s_dlist_node
{
    void                *data;
    struct s_dlist_node *next;
    struct s_dlist_node *prev;
}   t_dlist_node;


typedef struct s_dlist
{
    t_dlist_node    *head;
    t_dlist_node    *tail;
    size_t          size;
    void            (*del)(void *data);
}   t_dlist;


void        dlist_init(t_dlist *list, void (*del)(void *));
void        dlist_destroy(t_dlist *list);

void          dlist_delete_node(t_dlist *list, t_dlist_node *node);
short         dlist_push_front(t_dlist *list, void *data);
short         dlist_push_back(t_dlist *list, void *data);
short         dlist_insert_after(t_dlist *list, t_dlist_node *node, void *data);
short         dlist_insert_before(t_dlist *list, t_dlist_node *node, void *data);
void        dlist_dlist_delete_node(t_dlist *list, t_dlist_node *node);
void        dlist_del_front(t_dlist *list);
void        dlist_del_end(t_dlist *list);
void        dlist_remove_node(t_dlist *list, t_dlist_node *node);
void        dlist_clear(t_dlist *list);
t_dlist_node    *dlist_find_node(const t_dlist *list, const void *data,
                        int (*cmp)(const void *, const void *));
void        dlist_reverse(t_dlist *list);
void        dlist_foreach(t_dlist *list, void (*f)(void *));
void        dlist_merge(t_dlist *list1, t_dlist *list2);
size_t      dlist_size(const t_dlist *list);
int         dlist_empty(const t_dlist *list);
t_dlist_node    *dlist_front(const t_dlist *list);
t_dlist_node    *dlist_back(const t_dlist *list);

#endif