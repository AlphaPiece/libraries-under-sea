# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 11:03:40 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_sptree.h \
		     ../../libft/includes/*.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_spnode_alloc.c        ef_sptree_clear.c      ef_sptree_remove.c \
	  ef_spnode_create.c       ef_sptree_create.c     ef_sptree_set.c \
	  ef_spnode_free.c         ef_sptree_delete.c     ef_sptree_size.c \
	  ef_spnode_left_rotate.c  ef_sptree_find.c       ef_sptree_splay.c \
	  ef_spnode_maximum.c      ef_sptree_free.c       ef_sptree_split.c \
	  ef_spnode_minimum.c      ef_sptree_get.c        ef_sptree_traverse.c \
	  ef_spnode_right_rotate.c ef_sptree_insert.c     ef_sptree_alloc.c \
	  ef_sptree_join.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
