# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 14:23:06 by zwang             #+#    #+#              #
#    Updated: 2019/04/13 20:36:33 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libds.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

LST = ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
	  ft_lstnew.c ft_swappairs.c
GNT = ft_gntnew.c ft_gntnodeno.c ft_gntleafno.c ft_gntheight.c \
	  ft_gntarity.c
BNT = ft_bntnew.c ft_bntview.c ft_bntdel.c ft_bntnodeno.c \
 	  ft_bntiter_in.c ft_bntiter_pre.c ft_bntiter_post.c \
	  ft_bntalter_in.c ft_bntalter_pre.c ft_bntalter_post.c
BST = ft_bnt_to_bst.c ft_isbst.c ft_bstinsert.c ft_bstsearch.c ft_bstdel.c \
	  ft_bstdelroot.c ft_bstpopmax.c ft_bstpopmin.c
HMP = ft_hashstr.c ft_hmapnew.c ft_hmapsearch.c ft_hmapset.c ft_hmapget.c \
	  ft_hmapremove.c ft_hmapclear.c ft_hmapdel.c

OBJ = *.o

LST_DIR = srcs/lst/
GNT_DIR = srcs/gnt/
BNT_DIR = srcs/bnt/
BST_DIR = srcs/bst/
HMP_DIR = srcs/hmp/

OBJS_DIR = objs/

INCS = -I incs/ -I libs/libft/incs
SRCS = $(addprefix $(LST_DIR), $(LST)) $(addprefix $(GNT_DIR), $(GNT)) \
	   $(addprefix $(BNT_DIR), $(BNT)) $(addprefix $(BST_DIR), $(BST)) \
	   $(addprefix $(HMP_DIR), $(HMP))
LIBS = libs/libft/libft.a
OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

RESET = \033[0m
GREEN = \033[1;32m
RED = \033[1;31m


all: $(NAME)

$(NAME): 
	@printf "\n\x1B[38;5;208mCompiling $(NAME)...\n\x1b[37m"
	@$(CC) -g $(CFLAGS) -c $(SRCS) $(INCS)
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

.PHONY: all clean fclean re
