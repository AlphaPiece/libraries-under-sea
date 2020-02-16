# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 11:29:28 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_bheap.h \
		     ../../libft/includes/*.h ../../includes/ef_kvpair.h \
			 ../../includes/ef_darray.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_bheap_alloc.c        ef_bheap_free.c         ef_bheap_peek_top.c \
	  ef_bheap_change_key.c   ef_bheap_pop_top.c      ef_bheap_insert.c \
	  ef_bheap_clear.c        ef_bheap_heapify_down.c ef_bheap_set.c \
	  ef_bheap_compare.c      ef_bheap_heapify_up.c   ef_bheap_size.c \
	  ef_bheap_create.c       ef_bheap_index.c        ef_bheap_traverse.c \
	  ef_bheap_delete.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
