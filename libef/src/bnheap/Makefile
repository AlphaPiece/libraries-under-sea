# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 11:34:15 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_bnheap.h \
		     ../../libft/includes/*.h ../../includes/ef_deque.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_bnheap_alloc.c      ef_bnheap_insert.c     ef_bnnode_alloc.c \
	  ef_bnheap_change_key.c ef_bnheap_merge.c      ef_bnnode_create.c \
	  ef_bnheap_clear.c      ef_bnheap_peek_top.c   ef_bnnode_free.c \
	  ef_bnheap_create.c     ef_bnheap_pop_top.c    ef_bnnode_merge.c \
	  ef_bnheap_delete.c     ef_bnheap_set.c        ef_bnnode_reverse.c \
	  ef_bnheap_find.c       ef_bnheap_size.c       ef_bnnode_size.c \
	  ef_bnheap_free.c       ef_bnheap_traverse.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
