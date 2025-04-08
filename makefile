# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilaamari <ilaamari@42nice.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 21:26:34 by ilaamari          #+#    #+#              #
#    Updated: 2025/04/08 21:26:34 by ilaamari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

SRC			= $(wildcard ft_*.c)
OBJ			= $(SRC:.c=.o)

BONUS_SRC	= $(wildcard *_bonus.c)
BONUS_OBJ	= $(BONUS_SRC:.c=.o)

AR			= ar rcs
RM			= rm -f

ifdef BONUS
	OBJ	+= $(BONUS_OBJ)
endif

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus:
	$(MAKE) BONUS=1 all

.PHONY: all clean fclean re bonus
