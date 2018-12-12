/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globales.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 03:45:23 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/12 20:04:38 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBALES_H
# define GLOBALES_H

#include "struct.h"

t_flags				g_flags[] =
{
	{diez, "#"},
	{zero, "0"},
	{minus, "-"},
	{plus, "+"},
	{space, " "},
	{hh, "hh"},
	{h, "h"},
	{ll, "ll"},
	{l, "l"},
	{L, "L"},
	{end, NULL} // end signification
};

t_type				g_types[] =
{
	{'c', &ft_atoi},
	{'s', &ft_atoi},
	{'p', &ft_atoi},
    {'d', &ft_atoi},
    {'i', &ft_atoi},
    {'o', &ft_atoi},
    {'u', &ft_atoi},
    {'x', &ft_atoi},
	{'X', &ft_atoi},
	{'f', &ft_atoi},
	{'%', &ft_atoi},
	{'0', NULL}
};

#endif