/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globales.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 03:45:23 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/04 03:19:55 by mgessa           ###   ########.fr       */
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
	{'c', &_p_char},
	{'s', &_p_string},
	{'p', &_p_float},
    {'d', &_p_int},
    {'i', &_p_int},
    {'o', &_p_octale},
    {'u', &_p_uint},
    {'x', &_p_hex_l},
	{'X', &_p_float},
	{'f', &_p_float},
	{'%', &_p_modulo},
	{'0', NULL}
};

#endif