# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 14:23:06 by zwang             #+#    #+#              #
#    Updated: 2019/05/24 10:54:10 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libef.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

KVPAIR = ef_kvpair_alloc.c ef_kvpair_create.c ef_kvpair_free.c

DARRAY = ef_darray_alloc.c           ef_darray_resize.c \
		 ef_darray_pop.c             ef_darray_append.c \
		 ef_darray_free.c            ef_darray_remove.c \
		 ef_darray_clear.c           ef_darray_get.c \
		 ef_darray_reverse.c         ef_darray_copy.c \
		 ef_darray_insert.c          ef_darray_set.c \
		 ef_darray_delete.c          ef_darray_length.c \
		 ef_darray_index.c           ef_darray_create.c \
		 ef_darray_sort.c            ef_darray_elem_size.c \
		 ef_darray_partition.c       ef_darray_swap.c \
		 ef_darray_traverse.c

SLIST = ef_slist_alloc.c              ef_slist_last_node.c \
		ef_slist_append.c             ef_slist_length.c \
		ef_slist_append_list.c        ef_slist_create.c \
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
		ef_dlist_append_list.c        ef_dlist_create.c \
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
		ef_deque_clear.c       ef_deque_create.c      ef_deque_push_head.c \
		ef_deque_sort.c        ef_deque_peek_head.c   ef_deque_push_nth.c \
		ef_deque_copy.c        ef_deque_peek_nth.c    ef_deque_push_tail.c \
		ef_deque_free.c        ef_deque_peek_tail.c   ef_deque_reverse.c \
		ef_deque_pop_head.c    ef_deque_rotate.c      ef_deque_is_empty.c \
		ef_deque_pop_nth.c     ef_deque_traverse.c

NTREE = ef_ntree_alloc.c               ef_ntree_is_leaf.c \
		ef_ntree_append_child.c        ef_ntree_is_root.c \
		ef_ntree_child_index.c         ef_ntree_last_child.c \
		ef_ntree_copy.c                ef_ntree_last_sibling.c \
		ef_ntree_count_children.c      ef_ntree_create.c \
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
		ef_ntree_is_descendant.c       ef_ntree_count_leaves.c

ATREE = ef_anode_alloc.c        ef_anode_right_rotate.c ef_atree_get.c \
		ef_anode_create.c       ef_atree_alloc.c        ef_atree_insert.c \
		ef_anode_free.c         ef_atree_clear.c        ef_atree_remove.c \
		ef_anode_height.c       ef_atree_create.c       ef_atree_set.c \
		ef_anode_left_rotate.c  ef_atree_delete.c       ef_atree_size.c \
		ef_anode_maximum.c      ef_atree_find.c         ef_atree_traverse.c \
		ef_anode_minimum.c      ef_atree_free.c         ef_atree_height.c

RBTREE = ef_rbnode_alloc.c   ef_rbtree_free.c         ef_rbtree_create.c \
		 ef_rbnode_free.c    ef_rbtree_get.c          ef_rbtree_remove.c \
		 ef_rbnode_create.c  ef_rbnode_height.c       ef_rbnode_right_rotate.c \
		 ef_rbtree_alloc.c   ef_rbtree_insert.c       ef_rbtree_set.c \
		 ef_rbtree_clear.c   ef_rbnode_left_rotate.c  ef_rbtree_size.c \
		 ef_rbtree_delete.c  ef_rbnode_maximum.c      ef_rbtree_traverse.c \
		 ef_rbtree_find.c    ef_rbnode_minimum.c      ef_rbtree_height.c

SPTREE = ef_spnode_alloc.c        ef_sptree_clear.c      ef_sptree_remove.c \
		 ef_spnode_create.c       ef_sptree_create.c     ef_sptree_set.c \
		 ef_spnode_free.c         ef_sptree_delete.c     ef_sptree_size.c \
		 ef_spnode_left_rotate.c  ef_sptree_find.c       ef_sptree_splay.c \
		 ef_spnode_maximum.c      ef_sptree_free.c       ef_sptree_split.c \
		 ef_spnode_minimum.c      ef_sptree_get.c        ef_sptree_traverse.c \
		 ef_spnode_right_rotate.c ef_sptree_insert.c     ef_sptree_alloc.c \
		 ef_sptree_join.c

TREAP = ef_treap_alloc.c		ef_treap_set.c \
		ef_treap_clear.c		ef_treap_size.c \
		ef_treap_create.c		ef_treap_traverse.c \
		ef_treap_delete.c		ef_trnode_alloc.c \
		ef_treap_find.c			ef_trnode_create.c \
		ef_treap_free.c			ef_trnode_free.c \
		ef_treap_get.c			ef_trnode_left_rotate.c \
		ef_treap_insert.c		ef_trnode_right_rotate.c \
		ef_treap_remove.c

HTABLE = ef_hash_integer.c    ef_htable_find.c     ef_htable_pairs.c \
		 ef_hash_pointer.c    ef_htable_free.c     ef_htable_pop.c \
		 ef_hash_string.c     ef_htable_get.c      ef_htable_remove.c \
		 ef_htable_alloc.c    ef_htable_hash.c     ef_htable_resize.c \
		 ef_htable_clear.c    ef_htable_insert.c   ef_htable_set.c \
		 ef_htable_delete.c   ef_htable_create.c   ef_htable_size.c \
		 ef_htable_traverse.c

BHEAP = ef_bheap_alloc.c        ef_bheap_free.c         ef_bheap_peek_top.c \
		ef_bheap_change_key.c   ef_bheap_pop_top.c      ef_bheap_insert.c \
		ef_bheap_clear.c        ef_bheap_heapify_down.c ef_bheap_set.c \
		ef_bheap_compare.c      ef_bheap_heapify_up.c   ef_bheap_size.c \
		ef_bheap_create.c       ef_bheap_index.c        ef_bheap_traverse.c \
		ef_bheap_delete.c

BNHEAP = ef_bnheap_alloc.c      ef_bnheap_insert.c     ef_bnnode_alloc.c \
		 ef_bnheap_change_key.c ef_bnheap_merge.c      ef_bnnode_create.c \
		 ef_bnheap_clear.c      ef_bnheap_peek_top.c   ef_bnnode_free.c \
		 ef_bnheap_create.c     ef_bnheap_pop_top.c    ef_bnnode_merge.c \
		 ef_bnheap_delete.c     ef_bnheap_set.c        ef_bnnode_reverse.c \
		 ef_bnheap_find.c       ef_bnheap_size.c       ef_bnnode_size.c \
		 ef_bnheap_free.c       ef_bnheap_traverse.c

OBJ = *.o

KVPAIR_DIR = srcs/kvpair/
DARRAY_DIR = srcs/darray/
SLIST_DIR = srcs/slist/
DLIST_DIR = srcs/dlist/
DEQUE_DIR = srcs/deque/
NTREE_DIR = srcs/ntree/
ATREE_DIR = srcs/atree/
RBTREE_DIR = srcs/rbtree/
SPTREE_DIR = srcs/sptree/
TREAP_DIR = srcs/treap/
HTABLE_DIR = srcs/htable/
BHEAP_DIR = srcs/bheap/
BNHEAP_DIR = srcs/bnheap/

OBJS_DIR = objs/

INCS = -I incs
SRCS = $(addprefix $(KVPAIR_DIR), $(KVPAIR)) \
	   $(addprefix $(DARRAY_DIR), $(DARRAY)) \
	   $(addprefix $(SLIST_DIR), $(SLIST)) \
	   $(addprefix $(DLIST_DIR), $(DLIST)) \
	   $(addprefix $(DEQUE_DIR), $(DEQUE)) \
	   $(addprefix $(NTREE_DIR), $(NTREE)) \
	   $(addprefix $(ATREE_DIR), $(ATREE)) \
	   $(addprefix $(RBTREE_DIR), $(RBTREE)) \
	   $(addprefix $(SPTREE_DIR), $(SPTREE)) \
	   $(addprefix $(TREAP_DIR), $(TREAP)) \
	   $(addprefix $(HTABLE_DIR), $(HTABLE)) \
	   $(addprefix $(BHEAP_DIR), $(BHEAP)) \
	   $(addprefix $(BNHEAP_DIR), $(BNHEAP))

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
