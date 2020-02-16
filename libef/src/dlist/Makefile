# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 10:25:06 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_dlist.h \
			 ../../libft/includes/*.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_dlist_alloc.c              ef_dlist_last_node.c \
	  ef_dlist_append.c             ef_dlist_length.c \
	  ef_dlist_append_list.c        ef_dlist_create.c \
	  ef_dlist_copy.c               ef_dlist_node_index.c \
	  ef_dlist_data_index.c         ef_dlist_nth_data.c \
	  ef_dlist_find.c               ef_dlist_nth_node.c \
	  ef_dlist_first_node.c         ef_dlist_prepend.c \
	  ef_dlist_free.c               ef_dlist_prepend_list.c \
	  ef_dlist_insert.c             ef_dlist_remove.c \
	  ef_dlist_insert_after.c       ef_dlist_reverse.c \
	  ef_dlist_insert_before.c      ef_dlist_rotate.c \
	  ef_dlist_insert_list.c        ef_dlist_sort.c \
	  ef_dlist_insert_list_after.c  ef_dlist_traverse.c \
	  ef_dlist_insert_list_before.c ef_dlist_unlink.c \
	  ef_dlist_insert_sorted.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
