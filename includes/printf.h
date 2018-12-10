/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 21:19:48 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/10 20:57:49 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include "libft.h"

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

typedef struct		s_args // args list
{
	int		flags;
	t_args	*next;
}					t_args;

typedef	struct		s_proper // pass to g_types functions
{
	s_args	*flags;
	void	*value;
	int		precision;
	int		min_w;
}					t_proper;

typedef struct		s_type // type to functions
{
	char	*type;
	void	*func;
}					t_type;

typedef struct		s_flags // flags list in order of priority
{
	e_flags		flags_id;
	char		*c_val;
}					t_flags;	

t_flags				g_flags[] =
{
	{e_flags::diez, "#"},
	{e_flags::zero, "0"},
	{e_flags::minus, "-"},
	{e_flags::plus, "+"},
	{e_flags::space, " "},
	{e_flags::hh, "hh"},
	{e_flags::h, "h"},
	{e_flags::ll, "ll"},
	{e_flags::l, "l"},
	{e_flags::L, "L"},
	{e_flags::end, 0} // end signification
};

t_type				g_types[] =
{
	{"c", &ft_atoi},
	{"s", &ft_atoi},
	{"p", &ft_atoi},
    {"d", &ft_atoi},
    {"i", &ft_atoi},
    {"o", &ft_atoi},
    {"u", &ft_atoi},
    {"x", &ft_atoi},
	{"X", &ft_atoi},
	{"f", &ft_atoi},
	{"%", &ft_atoi},
	{NULL, NULL}
};

int		ft_printf(const char *format, ...);

#endif