/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 21:19:48 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/02 01:09:07 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include "stdio.h"

enum e_flags {
	diez = 0,
	zero = 1,
	minus = 2,
	plus = 3,
	space = 4,
	hh = 5,
	h = 6,
	l = 7,
	ll = 8,
	L = 9,
	end = -1
};

typedef	struct		s_proper // pass to g_types functions
{
	t_list			*flags;
	void			*value;
	int				precision;
	int				min_w;
}					t_proper;

typedef struct		s_type // type to functions
{
	char	type;
	int		(*func)(t_proper *properties, va_list *args);
}					t_type;

typedef struct	s_flags // flags list in order of priority
{
	enum e_flags	flags_id;
	char			*c_val;
}				t_flags;


void			ft_putnbr_long(long long n);
int				contain_flag(t_proper *props, enum e_flags flag);
int				ft_ll_size(long long int nb);
void			ft_write_multiple(int sz, char c);
void        	ft_putfaststr(const char *str, int max);
void        	print_first_padding(t_proper *properties, int *chain_z);
void        	print_end_padding(t_proper *properties, int *chain_z);
char			*ft_itoa_base(long long value, int base);
long long int 	get_uint_flags(t_proper *properties, va_list *args);
long long int	get_int_flags(t_proper *properties, va_list *args);
int				_p_octale(t_proper *properties, va_list *args);
int				_p_int(t_proper *properties, va_list *args);
int				_p_char(t_proper *properties, va_list *args);
int				_p_modulo(t_proper *properties, va_list *args);
int				_p_string(t_proper *properties, va_list *args);
int				_p_float(t_proper *properties, va_list *args);
int				_p_uint(t_proper *properties, va_list *args);
int				pass_min_width(const char *str, int max);
int				pass_precision(const char *str, int max);
int 			get_min_width(const char *str, int max);
int				get_precision(const char *str, int max);
int				get_typefunc(const char c);
void			ft_lstaddend(t_list **alst, t_list *newlst);
int				get_flag(const char *c, enum e_flags *flag);
void			ft_parse_flags(t_list **lst, const char *str, int max);
void			ft_parse_properties(t_proper *proper, const char *str, int max);
int				ft_convert(const char *str, int max, va_list *args);
void			ft_strlst_read(t_list **alst);
int				ft_validconv(const char *format);
int				ft_parse_rd(const char *format, va_list *args);

#endif