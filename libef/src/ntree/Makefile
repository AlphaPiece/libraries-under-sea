# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 10:35:07 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_ntree.h \
		     ../../libft/includes/*.h ../../includes/ef_deque.h \
			 ../../includes/ef_dlist.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_ntree_alloc.c               ef_ntree_is_leaf.c \
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

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
