# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aulukutu <aulukutu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 13:07:39 by aulukutu          #+#    #+#              #
#    Updated: 2023/03/13 14:26:43 by aulukutu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = $(wildcard)*.c

OBJS	=	${SRCS:.c=.o}

CFLAGS	=	-Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) 
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all