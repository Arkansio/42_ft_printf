/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 21:19:48 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/13 20:24:55 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>

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

typedef struct		s_args // args list
{
	int				flags;
	struct s_args	*next;
}					t_args;

typedef	struct		s_proper // pass to g_types functions
{
	t_args			*flags;
	void			*value;
	int				precision;
	int				min_w;
}					t_proper;

typedef struct		s_type // type to functions
{
	char	type;
	void	*func;
}					t_type;

typedef struct	s_flags // flags list in order of priority
{
	enum e_flags	flags_id;
	char			*c_val;
}				t_flags;	

int			ft_validconv(const char *format);
t_list		*ft_parse(const char *format);
void		ft_parse_rd(const char *str);

#endif