# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 10:24:40 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

DEPENDENCY = ../../includes/ef_define.h ../../includes/ef_slist.h \
			 ../../libft/includes/*.h

INCLUDES = -I ../../includes -I ../../libft/includes

SRC = ef_slist_alloc.c              ef_slist_last_node.c \
      ef_slist_append.c             ef_slist_length.c \
      ef_slist_append_list.c        ef_slist_create.c \
      ef_slist_copy.c               ef_slist_node_index.c \
      ef_slist_data_index.c         ef_slist_nth_data.c \
      ef_slist_find.c               ef_slist_nth_node.c \
      ef_slist_free.c               ef_slist_prepend.c \
      ef_slist_insert.c             ef_slist_prepend_list.c \
      ef_slist_insert_after.c       ef_slist_remove.c \
      ef_slist_insert_before.c      ef_slist_reverse.c \
      ef_slist_insert_list.c        ef_slist_rotate.c \
      ef_slist_insert_list_after.c  ef_slist_sort.c \
      ef_slist_insert_list_before.c ef_slist_traverse.c \
      ef_slist_insert_sorted.c      ef_slist_unlink.c

OBJ = $(SRC:.c=.o)


.PHONY: all clean

all: $(OBJ)

%.o: %.c $(DEPENDENCY)
	$(CC) $(CFLAGS) -c $< $(INCLUDES)

clean:
	rm -rf $(OBJ)
