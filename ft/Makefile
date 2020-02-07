# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 14:23:06 by zwang             #+#    #+#              #
#    Updated: 2020/02/06 14:49:52 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

MEM_FILES = ft_bzero.c      ft_memccpy.c    ft_memfree.c    ft_memswap.c \
			ft_getbits.c    ft_memchr.c     ft_memmove.c    ft_ptrhash.c \
			ft_invertbits.c ft_memcmp.c     ft_putbits.c    ft_memalloc.c \
			ft_memcpy.c     ft_memset.c     ft_setbits.c

NUM_FILES = ft_ftoa.c  ft_inthash.c  ft_min.c     ft_rand.c       ft_swap.c \
			ft_intarrmax.c ft_itoa.c ft_ntoa.c    ft_randint.c    ft_untoa.c \
			ft_intarrmin.c ft_ltoa.c ft_ntoa_base.c ft_randintarr.c \
			ft_untoa_base.c ft_intarrsum.c ft_max.c  ft_numlen.c \
			ft_sum.c        ft_unumlen.c

CHR_FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isspace.c \
			ft_isprint.c  ft_tolower.c ft_toupper.c ft_islower.c ft_isupper.c

STR_FILES = ft_atof.c  ft_strarrsort.c ft_strdel.c  ft_strlen.c  ft_strrchr.c \
			ft_atoi.c  ft_strcap.c     ft_strdup.c  ft_strmap.c  ft_strsepn.c \
			ft_atoi_base.c ft_strcat.c ft_strend.c ft_strmapi.c  ft_strsplit.c \
			ft_atol.c ft_strchr.c  ft_strequ.c   ft_strncat.c   ft_strstart.c \
			ft_atol_base.c ft_strclen.c ft_strhash.c ft_strncmp.c ft_strstr.c \
			ft_isnumeric.c ft_strclr.c ft_striter.c ft_strncpy.c  ft_strsub.c \
			ft_strarrdel.c ft_strcmp.c ft_striteri.c ft_strnequ.c ft_strsubn.c \
			ft_strarrdup.c ft_strcompose.c ft_strjoin.c ft_strnew.c \
			ft_strtrim.c ft_strarrlen.c  ft_strcpy.c  ft_strlcat.c \
			ft_strnstr.c  ft_strsqz.c

FIO_FILES = ft_dprintf.c     ft_dputstr.c     ft_printf.c      ft_putnchar.c \
	  ft_dputchar.c    ft_getchar.c     ft_putchar.c     ft_dputnchar.c \
	  ft_dputlstr.c    ft_getonechar.c  ft_putlstr.c     ft_putncharln.c \
	  ft_dputnbr.c     ft_nextline.c    ft_putnbr.c      ft_putstr.c

MEM_DIR = src/mem/
NUM_DIR = src/num/
CHR_DIR = src/chr/
STR_DIR = src/str/
FIO_DIR = src/fio/

MEM = $(addprefix $(MEM_DIR), $(MEM_FILES))
NUM = $(addprefix $(NUM_DIR), $(NUM_FILES))
CHR = $(addprefix $(CHR_DIR), $(CHR_FILES))
STR = $(addprefix $(STR_DIR), $(STR_FILES))
FIO = $(addprefix $(FIO_DIR), $(FIO_FILES)) 

MEM_OBJ = $(MEM_FILES:.c=.o)
NUM_OBJ = $(NUM_FILES:.c=.o)
CHR_OBJ = $(CHR_FILES:.c=.o)
STR_OBJ = $(STR_FILES:.c=.o)
FIO_OBJ = $(FIO_FILES:.c=.o)

RESET = \033[0m
GREEN = \033[1;32m
RED = \033[1;31m



.PHONY: all clean fclean re

all: $(MEM_OBJ) $(NUM_OBJ) $(CHR_OBJ) $(STR_OBJ) $(FIO_OBJ)
	@make -C src/fio/ft_vdprintf/
	@ar rcs $(NAME) *.o
	@ranlib $(NAME)
	@printf "$(GREEN)[✓] $(RESET)\x1B[32m$(NAME) ready!\n\x1b[37m"

$(MEM_OBJ): $(MEM) includes/*.h
	@printf "\x1B[38;5;208mCompiling mem...\n\x1b[37m"
	@$(CC) -c $(MEM) -I includes

$(NUM_OBJ): $(NUM) includes/*.h
	@printf "\x1B[38;5;208mCompiling num...\n\x1b[37m"
	@$(CC) -c $(NUM) -I includes

$(CHR_OBJ): $(CHR) includes/*.h
	@printf "\x1B[38;5;208mCompiling chr...\n\x1b[37m"
	@$(CC) -c $(CHR) -I includes

$(STR_OBJ): $(STR) includes/*.h
	@printf "\x1B[38;5;208mCompiling str...\n\x1b[37m"
	@$(CC) -c $(STR) -I includes

$(FIO_OBJ): $(FIO) includes/*.h
	@printf "\x1B[38;5;208mCompiling fio...\n\x1b[37m"
	@$(CC) -c $(FIO) -I includes

clean:
	@rm -rf *.o
	@printf "$(RED)[x] $(RESET)\x1B[31m$(NAME) object files deleted\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(RED)[x] $(RESET)\x1B[31m$(NAME) deleted\n"

re: fclean all
