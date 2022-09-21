# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 16:13:08 by vasargsy          #+#    #+#              #
#    Updated: 2022/07/04 16:13:09 by vasargsy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1	= server
NAME2	= client
SRCS	= $(shell find "." -name "*.c")
OBJS	= $(SRCS:.c=.o)
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : $(NAME1) $(NAME2)

$(NAME1) : $(OBJS)
	$(CC) $(CFLAGS) server.o -o $(NAME1)

$(NAME2) : $(OBJS)
	$(CC) $(CFLAGS) client.o -o $(NAME2)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME1) $(NAME2)

re : fclean all

.PHONY: all clean fclean re