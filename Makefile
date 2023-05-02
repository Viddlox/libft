# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 16:36:35 by mcheng            #+#    #+#              #
#    Updated: 2023/03/26 17:14:06 by mcheng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBC = ar -rcs
SRCDIR = srcs
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:.c=.o)
INCS = srcs/.
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -I ${INCS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
