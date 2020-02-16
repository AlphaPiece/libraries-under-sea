# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 11:10:58 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_treap.h \
		     ../../libft/includes/*.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_treap_alloc.c		ef_treap_set.c \
	  ef_treap_clear.c		ef_treap_size.c \
	  ef_treap_create.c		ef_treap_traverse.c \
	  ef_treap_delete.c		ef_trnode_alloc.c \
	  ef_treap_find.c		ef_trnode_create.c \
	  ef_treap_free.c		ef_trnode_free.c \
	  ef_treap_get.c		ef_trnode_left_rotate.c \
	  ef_treap_insert.c		ef_trnode_right_rotate.c \
	  ef_treap_remove.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
