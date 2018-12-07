# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/20 23:24:40 by mgessa            #+#    #+#              #
#    Updated: 2018/12/07 20:06:21 by mgessa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = ft_printf.c

FLAGS = -Wall \
		-Werror \
		-Wextra

OBJS = $(SRCS:.c=.o)

HEADER = ./

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	gcc $(FLAGS) -o $(NAME) $^ -L. libft/libft.a

./%.o: ./%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/

clean:
	/bin/rm -f $(OBJS)
	make -C libft clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean re fclean
