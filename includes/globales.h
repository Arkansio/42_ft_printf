/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globales.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 03:45:23 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 22:49:32 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBALES_H
# define GLOBALES_H

#include "struct.h"

static t_flags				g_flags[] =
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

static t_type				g_types[] =
{
	{'c', &p_char},
	{'s', &p_string},
	{'p', &p_pointer},
    {'d', &p_int},
    {'i', &p_int},
    {'o', &p_octale},
    {'u', &p_uint},
    {'x', &p_hex_l},
	{'X', &p_hex_u},
	{'f', &p_float},
	{'%', &p_modulo},
	{'0', NULL}
};

#endif