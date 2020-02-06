# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/06 10:09:58 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

INCLUDES = ../../../includes

SRC = 	character.c        ft_vdprintf.c      strblock.c \
		fmt_handler.c      length_handler.c   string.c \
		fmt_helper.c       signed_integer.c   unsigned_integer.c

OBJ = $(SRC:.c=.o)


.PHONY: all

all: $(OBJ)
	@mv $(OBJ) ../../../

$(OBJ): $(SRC) $(INCLUDES)
	@$(CC) $(CFLAGS) -c $(SRC) -I $(INCLUDES)
