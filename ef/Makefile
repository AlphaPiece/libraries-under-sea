# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 14:23:06 by zwang             #+#    #+#              #
#    Updated: 2019/05/01 12:34:03 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libef.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

DARRAY = ef_darray_append_array.c     ef_darray_insert_array.c \
		 ef_darray_remove_last_elem.c ef_darray_decrement.c \
		 ef_darray_length.c           ef_darray_remove_range.c \
		 ef_darray_elem_size.c        ef_darray_new.c \
		 ef_darray_reverse.c          ef_darray_expand_capacity.c \
		 ef_darray_partition.c        ef_darray_sized_new.c \
		 ef_darray_free.c             ef_darray_prepend_array.c \
		 ef_darray_sort.c             ef_darray_increment.c \
		 ef_darray_remove.c           ef_darray_swap.c \
		 ef_darray_type_size.c
SLIST = ef_slist_alloc.c              ef_slist_last_node.c \
		ef_slist_append.c             ef_slist_length.c \
		ef_slist_append_list.c        ef_slist_new.c \
		ef_slist_copy.c               ef_slist_node_index.c \
		ef_slist_data_index.c         ef_slist_nth_data.c \
		ef_slist_find.c               ef_slist_nth_node.c \
		ef_slist_free.c               ef_slist_prepend.c \
		ef_slist_insert.c             ef_slist_prepend_list.c \
		ef_slist_insert_after.c       ef_slist_remove.c \
		ef_slist_insert_before.c      ef_slist_reverse.c \
		ef_slist_insert_list.c        ef_slist_rotate.c \
		ef_slist_insert_list_after.c  ef_slist_sort.c \
		ef_slist_insert_list_before.c ef_slist_traverse.c \
		ef_slist_insert_sorted.c      ef_slist_unlink.c
DLIST = ef_dlist_alloc.c              ef_dlist_last_node.c \
		ef_dlist_append.c             ef_dlist_length.c \
		ef_dlist_append_list.c        ef_dlist_new.c \
		ef_dlist_copy.c               ef_dlist_node_index.c \
		ef_dlist_data_index.c         ef_dlist_nth_data.c \
		ef_dlist_find.c               ef_dlist_nth_node.c \
		ef_dlist_first_node.c         ef_dlist_prepend.c \
		ef_dlist_free.c               ef_dlist_prepend_list.c \
		ef_dlist_insert.c             ef_dlist_remove.c \
		ef_dlist_insert_after.c       ef_dlist_reverse.c \
		ef_dlist_insert_before.c      ef_dlist_rotate.c \
		ef_dlist_insert_list.c        ef_dlist_sort.c \
		ef_dlist_insert_list_after.c  ef_dlist_traverse.c \
		ef_dlist_insert_list_before.c ef_dlist_unlink.c \
		ef_dlist_insert_sorted.c
DEQUE = ef_deque_alloc.c       ef_deque_length.c      ef_deque_pop_tail.c \
		ef_deque_clear.c       ef_deque_new.c         ef_deque_push_head.c \
		ef_deque_sort.c        ef_deque_peek_head.c   ef_deque_push_nth.c \
		ef_deque_copy.c        ef_deque_peek_nth.c    ef_deque_push_tail.c \
		ef_deque_free.c        ef_deque_peek_tail.c   ef_deque_reverse.c \
		ef_deque_pop_head.c    ef_deque_rotate.c      ef_deque_is_empty.c \
		ef_deque_pop_nth.c
NTREE = ef_ntree_alloc.c               ef_ntree_is_leaf.c \
		ef_ntree_append_child.c        ef_ntree_is_root.c \
		ef_ntree_child_index.c         ef_ntree_last_child.c \
		ef_ntree_copy.c                ef_ntree_last_sibling.c \
		ef_ntree_count_children.c      ef_ntree_new.c \
		ef_ntree_count_nodes.c         ef_ntree_next_sibling.c \
		ef_ntree_depth.c               ef_ntree_nth_child.c \
		ef_ntree_find.c                ef_ntree_prepend_child.c \
		ef_ntree_first_child.c         ef_ntree_prev_sibling.c \
		ef_ntree_first_sibling.c       ef_ntree_remove.c \
		ef_ntree_free.c                ef_ntree_reverse_children.c \
		ef_ntree_height.c              ef_ntree_root.c \
		ef_ntree_insert_child.c        ef_ntree_rotate_children.c \
		ef_ntree_insert_child_after.c  ef_ntree_sort_children.c \
		ef_ntree_insert_child_before.c ef_ntree_traverse.c \
		ef_ntree_is_ancestor.c         ef_ntree_unlink.c \
		ef_ntree_is_descendant.c
OBJ = *.o

DARRAY_DIR = srcs/darray/
SLIST_DIR = srcs/slist/
DLIST_DIR = srcs/dlist/
DEQUE_DIR = srcs/deque/
NTREE_DIR = srcs/ntree/

OBJS_DIR = objs/

INCS = -I incs
SRCS = $(addprefix $(DARRAY_DIR), $(DARRAY)) \
	   $(addprefix $(SLIST_DIR), $(SLIST)) \
	   $(addprefix $(DLIST_DIR), $(DLIST)) \
	   $(addprefix $(DEQUE_DIR), $(DEQUE)) \
	   $(addprefix $(NTREE_DIR), $(NTREE))
OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

RESET = \033[0m
GREEN = \033[1;32m
RED = \033[1;31m

all: $(NAME)

$(NAME): 
	@make -C ../ft compile
	@mv ../ft/$(OBJS_DIR) .
	@$(CC) $(CFLAGS) -c $(SRCS) $(INCS)
	@mv $(OBJ) $(OBJS_DIR)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "\n$(GREEN)[✓] $(RESET)\x1B[32m$(NAME) ready!\n\x1b[37m"

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJS_DIR)
	@printf "$(RED)[x] $(RESET)\x1B[31m$(NAME) object files deleted\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(RED)[x] $(RESET)\x1B[31m$(NAME) deleted\n"

re: fclean all

.PHONY: all clean fclean re
