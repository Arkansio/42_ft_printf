# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/20 23:24:40 by mgessa            #+#    #+#              #
#    Updated: 2019/01/23 01:20:44 by mgessa           ###   ########.fr        #
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
		p_float.c \
		p_string.c \
		p_modulo.c \
		ft_write_multiple.c \
		p_char.c \
		padding_char.c \
		contain_flag.c \
		p_int.c \
		ft_putnbr_long.c \
		p_octale.c \
		ft_itoa_base.c \
		get_int_flags.c \
		ft_ll_size.c \
		get_uint_flags.c \
		p_uint.c \
		p_hex_l.c \
		p_hex_u.c \
		p_pointer.c \
		ft_putnbr_ullong.c \
		ft_ull_size.c \
		can_ignore_zero.c

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
		ft_putchar.c \
		ft_strcpy.c \
		ft_strrev.c \
		ft_lstdel.c

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

./%.o: ./src/conversion/float/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/int/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/hex/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/pointer/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/uint/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/string/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/modulo/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/octale/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/char/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/conversion/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/parsing/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

./%.o: ./src/utils/%.c
	gcc $(FLAGS) -c $^ -I $(HEADER) -I ./libft/includes

clean:
	/bin/rm -f $(OBJS)
	/bin/rm -f $(OBJSL)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
