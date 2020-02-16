# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 12:17:00 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_htable.h \
		     ../../libft/includes/*.h ../../includes/ef_dlist.h \
			 ../../includes/ef_kvpair.h ../../includes/ef_darray.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_hash_integer.c    ef_htable_find.c     ef_htable_pairs.c \
	  ef_hash_pointer.c    ef_htable_free.c     ef_htable_pop.c \
	  ef_hash_string.c     ef_htable_get.c      ef_htable_remove.c \
	  ef_htable_alloc.c    ef_htable_hash.c     ef_htable_resize.c \
	  ef_htable_clear.c    ef_htable_insert.c   ef_htable_set.c \
	  ef_htable_delete.c   ef_htable_create.c   ef_htable_size.c \
	  ef_htable_traverse.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
