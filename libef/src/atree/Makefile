# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 10:29:08 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_atree.h \
		     ../../libft/includes/*.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_anode_alloc.c        ef_anode_right_rotate.c ef_atree_get.c \
	  ef_anode_create.c       ef_atree_alloc.c        ef_atree_insert.c \
	  ef_anode_free.c         ef_atree_clear.c        ef_atree_remove.c \
	  ef_anode_height.c       ef_atree_create.c       ef_atree_set.c \
	  ef_anode_left_rotate.c  ef_atree_delete.c       ef_atree_size.c \
	  ef_anode_maximum.c      ef_atree_find.c         ef_atree_traverse.c \
	  ef_anode_minimum.c      ef_atree_free.c         ef_atree_root.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
