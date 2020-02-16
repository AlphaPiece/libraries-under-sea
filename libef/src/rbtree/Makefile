# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 10:46:04 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_rbtree.h \
		     ../../libft/includes/*.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_rbnode_alloc.c   ef_rbtree_free.c         ef_rbtree_create.c \
	  ef_rbnode_free.c    ef_rbtree_get.c          ef_rbtree_remove.c \
	  ef_rbnode_create.c  ef_rbnode_height.c       ef_rbnode_right_rotate.c \
	  ef_rbtree_alloc.c   ef_rbtree_insert.c       ef_rbtree_set.c \
	  ef_rbtree_clear.c   ef_rbnode_left_rotate.c  ef_rbtree_size.c \
	  ef_rbtree_delete.c  ef_rbnode_maximum.c      ef_rbtree_traverse.c \
	  ef_rbtree_find.c    ef_rbnode_minimum.c      ef_rbtree_root.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
