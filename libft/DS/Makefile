# DS/Makefile

NAME        = ../../libs/libft_ds.a
DS_DIR      = .
OBJS_DIR    = ../../objs/ds
INCLUDE_DIR = ../../include

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g
AR          = ar
ARFLAGS     = rcs

# Color definitions
RESET       = \033[0;39m
GREEN       = \033[0;92m
MAGENTA     = \033[0;95m
YELLOW      = \033[0;93m

# Source files
SRCS_DS = \
    $(DS_DIR)/dlist/dlist_back.c \
    $(DS_DIR)/dlist/dlist_clear.c \
    $(DS_DIR)/dlist/dlist_del_end.c \
    $(DS_DIR)/dlist/dlist_del_front.c \
    $(DS_DIR)/dlist/dlist_del_node.c \
    $(DS_DIR)/dlist/dlist_destroy.c \
    $(DS_DIR)/dlist/is_dlist_empty.c \
    $(DS_DIR)/dlist/dlist_find_node.c \
    $(DS_DIR)/dlist/dlist_foreach_on_data.c \
    $(DS_DIR)/dlist/dlist_front.c \
    $(DS_DIR)/dlist/dlist_init.c \
    $(DS_DIR)/dlist/dlist_insert_after.c \
    $(DS_DIR)/dlist/dlist_insert_before.c \
    $(DS_DIR)/dlist/dlist_insert_begining.c \
    $(DS_DIR)/dlist/dlist_insert_end.c \
    $(DS_DIR)/dlist/dlist_merge.c \
    $(DS_DIR)/dlist/dlist_remove_node.c \
    $(DS_DIR)/dlist/dlist_reverse.c \
    $(DS_DIR)/dlist/dlist_size.c

SRCS_LST = \
    $(DS_DIR)/lst/ft_lstnew_bonus.c \
    $(DS_DIR)/lst/ft_lstadd_front_bonus.c \
    $(DS_DIR)/lst/ft_lstsize_bonus.c \
    $(DS_DIR)/lst/ft_lstlast_bonus.c \
    $(DS_DIR)/lst/ft_lstadd_back_bonus.c \
    $(DS_DIR)/lst/ft_lstdelone_bonus.c \
    $(DS_DIR)/lst/ft_lstclear_bonus.c \
    $(DS_DIR)/lst/ft_lstiter_bonus.c \
    $(DS_DIR)/lst/ft_lstmap_bonus.c



# Stack sources
SRCS_STACK = \
    $(DS_DIR)/stack/is_stack_empty.c \
    $(DS_DIR)/stack/stack_clear.c \
    $(DS_DIR)/stack/stack_clone.c \
    $(DS_DIR)/stack/stack_create.c \
    $(DS_DIR)/stack/stack_destroy.c \
    $(DS_DIR)/stack/stack_iter_on_data.c \
    $(DS_DIR)/stack/stack_peek.c \
    $(DS_DIR)/stack/stack_pop.c \
    $(DS_DIR)/stack/stack_push.c \
    $(DS_DIR)/stack/stack_size.c

# Queue sources
SRCS_QUEUE = \
    $(DS_DIR)/queue/dequeue.c \
    $(DS_DIR)/queue/enqueue.c \
    $(DS_DIR)/queue/is_queue_empty.c \
    $(DS_DIR)/queue/is_queue_full.c \
    $(DS_DIR)/queue/queue_clear.c \
    $(DS_DIR)/queue/queue_create.c \
    $(DS_DIR)/queue/queue_destroy.c \
    $(DS_DIR)/queue/queue_front.c \
    $(DS_DIR)/queue/queue_iter.c \
    $(DS_DIR)/queue/queue_rear.c \
    $(DS_DIR)/queue/queue_size.c \
    $(DS_DIR)/queue/queue_split.c





# Existing pattern rules will handle compilation




OBJS_STACK = $(patsubst $(DS_DIR)/%.c,$(OBJS_DIR)/%.o,$(SRCS_STACK))
OBJS_QUEUE = $(patsubst $(DS_DIR)/%.c,$(OBJS_DIR)/%.o,$(SRCS_QUEUE))
OBJS_DS  = $(patsubst $(DS_DIR)/%.c,$(OBJS_DIR)/%.o,$(SRCS_DS))
OBJS_LST = $(patsubst $(DS_DIR)/%.c,$(OBJS_DIR)/%.o,$(SRCS_LST))

# Update the all target
all: $(NAME)

# Update the library creation rule
$(NAME): $(OBJS_DS) $(OBJS_LST) $(OBJS_STACK) $(OBJS_QUEUE)
	@mkdir -p $(dir $(NAME))
	@echo "$(MAGENTA)Creating DS library: $(NAME)$(RESET)"
	$(AR) $(ARFLAGS) $(NAME) $(OBJS_DS) $(OBJS_LST) $(OBJS_STACK) $(OBJS_QUEUE)

$(OBJS_DIR)/%.o: $(DS_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo "$(GREEN)Compiling DS: $< $(RESET)"
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE_DIR)

clean:
	@echo "$(YELLOW)Cleaning DS objects...$(RESET)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "$(YELLOW)Removing DS library...$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
