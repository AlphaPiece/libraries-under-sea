# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 10:24:21 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_darray.h \
			 ../../libft/includes/*.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_darray_alloc.c           ef_darray_resize.c \
	  ef_darray_pop.c             ef_darray_append.c \
	  ef_darray_free.c            ef_darray_remove.c \
	  ef_darray_clear.c           ef_darray_get.c \
	  ef_darray_reverse.c         ef_darray_copy.c \
	  ef_darray_insert.c          ef_darray_set.c \
	  ef_darray_delete.c          ef_darray_length.c \
	  ef_darray_index.c           ef_darray_create.c \
	  ef_darray_sort.c            ef_darray_elem_size.c \
	  ef_darray_partition.c       ef_darray_swap.c \
	  ef_darray_traverse.c        ef_darray_peek.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
