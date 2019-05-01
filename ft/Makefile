# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 14:23:06 by zwang             #+#    #+#              #
#    Updated: 2019/05/01 12:49:52 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

MEM = ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	  ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_memswap.c \
	  ft_getbits.c ft_setbits.c ft_invertbits.c ft_memrealloc.c ft_putbits.c \
	  ft_memfree.c
NUM = ft_itoa.c ft_ltoa.c ft_ntoa.c ft_untoa.c ft_numlen.c ft_unumlen.c \
	  ft_ntoa_base.c ft_untoa_base.c ft_sqrt.c ft_pow.c ft_ceil.c ft_floor.c \
	  ft_numarrcpy.c ft_iselem.c ft_max.c ft_min.c ft_sum.c ft_intarrmin.c \
	  ft_intarrmin.c ft_intarrsum.c ft_prime_factors.c ft_analyze_float.c \
      ft_randintarr.c ft_ftoa.c ft_factorial.c ft_fibonacci.c ft_uglynum.c \
	  ft_swap.c
CHR = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isspace.c \
	  ft_isprint.c  ft_tolower.c ft_toupper.c ft_islower.c ft_isupper.c
STR = ft_atoi.c ft_atol.c ft_atof.c ft_atoi_base.c ft_atol_base.c \
	  ft_isnumeric.c ft_strnew.c ft_strcapitalize.c ft_strsqueeze.c \
	  ft_strcat.c ft_strlcat.c ft_strncat.c ft_strchr.c ft_strrchr.c \
	  ft_strstr.c ft_strnstr.c ft_strdel.c ft_strclr.c ft_strlen.c \
	  ft_strcmp.c ft_strncmp.c ft_strequ.c ft_strnequ.c ft_strcpy.c \
	  ft_strncpy.c ft_strdup.c ft_strstart.c ft_strend.c ft_striter.c \
	  ft_striteri.c ft_strmap.c ft_strmapi.c ft_strtrim.c ft_strjoin.c \
	  ft_strcompose.c ft_strsub.c ft_strsepnum.c ft_strsplit.c ft_strarrlen.c \
	  ft_strarrsort.c ft_strarrdel.c ft_check_brackets.c ft_count_subs.c \
	  ft_strarrdup.c ft_strclen.c
FIO = ft_putchar.c  ft_putendl.c ft_putnbr.c  ft_putstr.c ft_putlstr.c \
	  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	  ft_putlstr_fd.c ft_putnchar_fd.c ft_putnchar.c ft_nextline.c \
	  ft_vdprintf/leaf/flag_handler.c ft_vdprintf/leaf/length_handler.c \
	  ft_vdprintf/branch/signed_integer.c \
	  ft_vdprintf/branch/unsigned_integer.c \
	  ft_vdprintf/branch/character.c ft_vdprintf/branch/string.c \
	  ft_vdprintf/core/fmt_handler.c ft_vdprintf/core/fmt_helper.c \
	  ft_vdprintf/core/str_handler.c ft_vdprintf/core/strblock.c \
	  ft_vdprintf/root/ft_vdprintf.c \
	  ft_getchar.c next_save_char.c ft_printf.c ft_dprintf.c \
	  ft_putlstr.c ft_putncharln.c \
	  ft_getonechar.c

OBJ = *.o

NUM_DIR = ./srcs/num/
CHR_DIR = ./srcs/chr/
STR_DIR = ./srcs/str/
MEM_DIR = ./srcs/mem/
FIO_DIR = ./srcs/fio/

OBJS_DIR = ./objs/

INCS = ./incs/
SRCS = $(addprefix $(NUM_DIR), $(NUM)) $(addprefix $(CHR_DIR), $(CHR)) \
	   $(addprefix $(STR_DIR), $(STR)) $(addprefix $(MEM_DIR), $(MEM)) \
	   $(addprefix $(FIO_DIR), $(FIO))
OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

RESET = \033[0m
GREEN = \033[1;32m
RED = \033[1;31m


all: $(NAME)

compile:
	@printf "\n\x1B[38;5;208mCompiling...\n\x1b[37m"
	@$(CC) -g $(CFLAGS) -c $(SRCS) -I $(INCS)
	@mkdir -p $(OBJS_DIR)
	@mv $(OBJ) $(OBJS_DIR)

$(NAME): compile
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

update:
	# ef
	@cp -rf incs/ ../ef/incs/
	# unix
	@rm -rf ../../unix/ft_ls/libs/libft/incs
	@cp -rf incs libft.a ../../unix/ft_ls/libs/libft/
	# algo
	@rm -rf  ../../algo/Fillit/libs/libft/incs
	@cp -rf incs libft.a ../../algo/Fillit/libs/libft/
	@rm -rf ../../algo/PushSwap/libs/libft/incs
	@cp -rf incs libft.a ../../algo/PushSwap/libs/libft/
	@rm -rf ../../algo/TicTacToe/libs/libft/incs
	@cp -rf incs libft.a ../../algo/TicTacToe/libs/libft/
	@rm -rf ../../algo/Gomoku/libs/libft/incs
	@cp -rf incs libft.a ../../algo/Gomoku/libs/libft/
	@rm -rf ../../algo/Minesweeper/libs/libft/incs
	@cp -rf incs libft.a ../../algo/Minesweeper/libs/libft/
	# tybot
	@rm -rf ../../tybot/libs/libft/incs
	@cp -rf incs libft.a ../../tybot/libs/libft/
	# bnc
	@rm -rf ../../bnc/libs/libft/incs
	@cp -rf incs libft.a ../../bnc/libs/libft/
	# game
	@rm -rf ../../game/2048/libs/libft/incs
	@cp -rf incs libft.a ../../game/2048/libs/libft/
	@rm -rf ../../game/Nim/libs/libft/incs
	@cp -rf incs libft.a ../../game/Nim/libs/libft/
	@rm -rf ../../game/Sastantua/libs/libft/incs
	@cp -rf incs libft.a ../../game/Sastantua/libs/libft/

re: fclean all

.PHONY: all clean fclean re
