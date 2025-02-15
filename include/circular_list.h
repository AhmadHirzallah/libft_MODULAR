#ifndef CIRCULAR_LIST_H
# define CIRCULAR_LIST_H

# include <stddef.h>

typedef struct t_list_node
{
	void				*data;
	struct t_list_node	*next;
	struct t_list_node	*prev;
    long    index;
}						t_list_node;

typedef struct s_circular_lst
{
	t_list_node *head;
	t_list_node *tail;
	size_t				size;
}						t_circular_lst;

void    circ_list_clear(t_circular_lst *list, void (*del)(void *));
void    circ_list_foreach(t_circular_lst *list, void (*f)(void *));
t_list_node *circ_list_front(t_circular_lst *list);
void    circ_list_init(t_circular_lst *list);
int     circ_list_insert_beginning(t_circular_lst *list, void *data);
int     circ_list_insert_end(t_circular_lst *list, void *data);
int     circ_list_is_empty(t_circular_lst *list);
void    circ_list_remove_node(t_circular_lst *list, t_list_node *node, void (*del)(void *));
size_t  circ_list_size(t_circular_lst *list);
void    circ_lst_push_front_into_other(t_circular_lst *dest, t_circular_lst *src);
void    circ_lst_rev_rotate(t_circular_lst *list);
void    circ_list_swap_first_2(t_circular_lst *list);
void    circ_lst_rotate(t_circular_lst *list);

#endif