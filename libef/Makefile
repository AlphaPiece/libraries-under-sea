# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 12:11:56 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 12:23:12 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libef.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

LIBFT_DIR = libft
KVPAIR_DIR = src/kvpair
DARRAY_DIR = src/darray
SLIST_DIR = src/slist
DLIST_DIR = src/dlist
DEQUE_DIR = src/deque
NTREE_DIR = src/ntree
ATREE_DIR = src/atree
RBTREE_DIR = src/rbtree
SPTREE_DIR = src/sptree
TREAP_DIR = src/treap
HTABLE_DIR = src/htable
BHEAP_DIR = src/bheap
BNHEAP_DIR = src/bnheap
DSET_DIR = src/dset

DIRS = $(LIBFT_DIR) $(KVPAIR_DIR) $(DARRAY_DIR) $(SLIST_DIR) $(DLIST_DIR) \
	   $(DEQUE_DIR) $(NTREE_DIR) $(ATREE_DIR) $(RBTREE_DIR) $(SPTREE_DIR) \
	   $(TREAP_DIR) $(HTABLE_DIR) $(BHEAP_DIR) $(BNHEAP_DIR) $(DSET_DIR)

LIBEF_OBJ = $(KVPAIR_DIR)/*.o $(DARRAY_DIR)/*.o $(SLIST_DIR)/*.o \
			$(DLIST_DIR)/*.o $(DEQUE_DIR)/*.o $(NTREE_DIR)/*.o \
			$(ATREE_DIR)/*.o $(RBTREE_DIR)/*.o $(SPTREE_DIR)/*.o \
			$(TREAP_DIR)/*.o $(HTABLE_DIR)/*.o $(BHEAP_DIR)/*.o \
			$(BNHEAP_DIR)/*.o $(DSET_DIR)/*.o

LIBFT_OBJ = $(LIBFT_DIR)/*.o


.PHONY: all clean fclean

all:
	for dir in $(DIRS); do \
		make -C $$dir; \
	done
	ar rc $(NAME) $(LIBEF_OBJ) $(LIBFT_OBJ)
	ranlib $(NAME)

clean:
	for dir in $(DIRS); do \
		make clean -C $$dir; \
	done

fclean: clean
	rm -rf $(NAME)
