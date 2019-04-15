# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 14:23:06 by zwang             #+#    #+#              #
#    Updated: 2019/04/15 17:53:34 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SLIST = slist_alloc.c slist_append.c slist_prepend.c slist_insert.c

OBJ = *.o

SLIST_DIR = srcs/slist/

OBJS_DIR = objs/

INCS = -I incs/ -I libs/libft/incs
SRCS = $(addprefix $(SLIST_DIR), $(SLIST))
OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

RESET = \033[0m
GREEN = \033[1;32m
RED = \033[1;31m



all: $(NAME)

$(NAME): 
	@printf "\n\x1B[38;5;208mCompiling $(NAME)...\n\x1b[37m"
	@$(CC) $(CFLAGS) -c $(SRCS) $(INCS)
	@mkdir -p $(OBJS_DIR)
	@mv $(OBJ) $(OBJS_DIR)
	@ar rcs $(NAME) $(OBJS)
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
	@$(CC) -o test_slist test_slist.c $(NAME) $(INCS)
	@./test_slist
	@rm -rf test_slist

.PHONY: all clean fclean re
