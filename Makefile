# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/20 23:24:40 by mgessa            #+#    #+#              #
#    Updated: 2018/12/12 20:09:32 by mgessa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_parse_rd.c \
		ft_parse.c \
		ft_convert.c

SRCSL = ft_atoi.c \
		ft_isdigit.c \
		ft_strlen.c \
		ft_strncmp.c

FLAGS = -Wall \
		-Werror \
		-Wextra \

OBJS = $(SRCS:.c=.o)

OBJSL = $(SRCSL:.c=.o)

HEADER = includes

all: $(NAME)

$(NAME): $(OBJSL) $(OBJS)
	ar rc $(NAME) $^
	gcc -o test.out maintest.c -L. ./libftprintf.a -I ./includes/

./%.o: ./src/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./libft/src/%.c
	gcc $(FLAGS) -c $^ -I ./libft/includes

clean:
	/bin/rm -f $(OBJS)
	/bin/rm -f $(OBJSL)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
