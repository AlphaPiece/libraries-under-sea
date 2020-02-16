# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 10:25:16 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_deque.h \
			 ../../libft/includes/*.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_deque_alloc.c       ef_deque_length.c      ef_deque_pop_tail.c \
	  ef_deque_clear.c       ef_deque_create.c      ef_deque_push_head.c \
	  ef_deque_sort.c        ef_deque_peek_head.c   ef_deque_push_nth.c \
	  ef_deque_copy.c        ef_deque_peek_nth.c    ef_deque_push_tail.c \
	  ef_deque_free.c        ef_deque_peek_tail.c   ef_deque_reverse.c \
	  ef_deque_pop_head.c    ef_deque_rotate.c      ef_deque_is_empty.c \
	  ef_deque_pop_nth.c     ef_deque_traverse.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
