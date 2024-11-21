# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 13:03:55 by erazumov          #+#    #+#              #
#    Updated: 2024/11/21 13:40:48 by erazumov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
HEADER = libfh.h
LIBC - ar rcs
FUNC = $(shell find -name \*.c) #! -name \*_bonus.c
OBJS = $(FUNC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $^

%.o : %.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm: norminette -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re
