# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 08:20:00 by Zexi Wang         #+#    #+#              #
#    Updated: 2020/02/16 09:01:33 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

INCLUDES = ../../../includes

SRC = 	character.c        ft_vdprintf.c      strblock.c \
		fmt_handler.c      length_handler.c   flag_handler.c \
		fmt_helper.c       string.c           signed_integer.c \
		unsigned_integer.c

OBJ = $(SRC:.c=.o)


.PHONY: all

all: $(OBJ)
	mv $(OBJ) ../../../

%.o: %.c $(INCLUDES)/*.h
	$(CC) $(CFLAGS) -c $< -I $(INCLUDES)
