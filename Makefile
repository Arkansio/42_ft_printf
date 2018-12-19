# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/20 23:24:40 by mgessa            #+#    #+#              #
#    Updated: 2018/12/19 23:14:33 by mgessa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_parse_rd.c \
		ft_validconv.c \
		ft_strlst_read.c \
		ft_lstaddend.c \
		get_flag.c \
		get_typefunc.c \
		ft_convert.c \
		get_min_width.c \
		get_precision.c \
		ft_parse_properties.c \
		pass_precision.c \
		ft_parse_flags.c \
		pass_min_width.c \
		ft_putfaststr.c \
		_p_float.c \
		_p_string.c \
		_p_modulo.c \
		ft_write_multiple.c \
		_p_char.c \
		padding_char.c \
		contain_flag.c \
		_p_int.c

SRCSL = ft_atoi.c \
		ft_isdigit.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_lstadd.c \
		ft_lstnew.c \
		ft_strsub.c \
		ft_memalloc.c \
		ft_memmove.c \
		ft_strnew.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_putnbr.c \
		ft_putchar.c

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
