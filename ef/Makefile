# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 14:23:06 by zwang             #+#    #+#              #
#    Updated: 2019/04/24 21:44:14 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libef.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SLIST = ef_slist_alloc.c ef_slist_append.c ef_slist_prepend.c \
		ef_slist_insert.c ef_slist_insert_before.c ef_slist_insert_sorted.c \
		ef_slist_sort.c ef_slist_remove.c ef_slist_remove_all.c \
		ef_slist_remove_custom.c ef_slist_remove_all_custom.c \
		ef_slist_remove_link.c ef_slist_delete_link.c ef_slist_free_node.c \
		ef_slist_free_list.c ef_slist_free_all.c ef_slist_length.c \
		ef_slist_copy.c ef_slist_copy_deep.c ef_slist_reverse.c \
		ef_slist_concat.c ef_slist_for_each.c ef_slist_last_node.c \
		ef_slist_nth_node.c ef_slist_nth_data.c ef_slist_find.c \
		ef_slist_find_custom.c ef_slist_position.c ef_slist_index.c
DLIST = ef_dlist_alloc.c ef_dlist_append.c ef_dlist_prepend.c \
		ef_dlist_insert.c ef_dlist_insert_before.c ef_dlist_insert_sorted.c \
		ef_dlist_sort.c ef_dlist_remove.c ef_dlist_remove_all.c \
		ef_dlist_remove_custom.c ef_dlist_remove_all_custom.c \
		ef_dlist_remove_link.c ef_dlist_delete_link.c ef_dlist_free_node.c \
		ef_dlist_free_list.c ef_dlist_free_all.c ef_dlist_length.c \
		ef_dlist_copy.c ef_dlist_copy_deep.c ef_dlist_reverse.c \
		ef_dlist_concat.c ef_dlist_for_each.c ef_dlist_last_node.c \
		ef_dlist_nth_node.c ef_dlist_nth_data.c ef_dlist_find.c \
		ef_dlist_find_custom.c ef_dlist_position.c ef_dlist_index.c \
		ef_dlist_first_node.c

OBJ = *.o

SLIST_DIR = srcs/slist/
DLIST_DIR = srcs/dlist/

OBJS_DIR = objs/

INCS = -I incs
SRCS = $(addprefix $(SLIST_DIR), $(SLIST)) $(addprefix $(DLIST_DIR), $(DLIST))
LIBS = libs/libft/libft.a
OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

RESET = \033[0m
GREEN = \033[1;32m
RED = \033[1;31m

all: $(NAME)

$(NAME): 
	@make -C ../ft compile
	@mv ../ft/$(OBJS_DIR) .
	@$(CC) $(CFLAGS) -c $(SRCS) $(INCS)
	@mv $(OBJ) $(OBJS_DIR)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "\n$(GREEN)[✓] $(RESET)\x1B[32m$(NAME) ready!\n\x1b[37m"

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJS_DIR)
	@printf "$(RED)[x] $(RESET)\x1B[31m$(NAME) object files deleted\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(RED)[x] $(RESET)\x1B[31m$(NAME) deleted\n"

re: fclean all

test_slist:
	@$(CC) -o test_slist test/test_slist.c $(NAME) $(INCS)
	@./test_slist
	@rm -rf test_slist

.PHONY: all clean fclean re
