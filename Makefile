# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/02/26 16:46:43 by fayan             #+#    #+#             #
#   Updated: 2022/02/26 16:46:50 by fayan            ###   ########.tr       #
#                                                                            #
# ************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c utils.c converthex.c itoas.c formats.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS)
			
clean:
			$(RM) $(OBJS)
fclean: clean
			$(RM) $(NAME) *.out
			
re:	fclean all

.PHONY:		all clean fclean re
