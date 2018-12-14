/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validconv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:45:43 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 01:28:37 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "globales.h"

static int	is_flag(const char *c)
{
	int		i;

	i = 0;
	while (g_flags[i].flags_id != end)
	{
		if (ft_strncmp(g_flags[i].c_val, c, ft_strlen(g_flags[i].c_val)) == 0)
			return (ft_strlen(g_flags[i].c_val));
		i++;
	}
	return (0);
}

static int 	is_convert(const char c)
{
	int		i;

	i = 0;
	while (g_types[i].func != NULL)
	{
		if (g_types[i].type == c)
			return (1);
		i++;
	}
	return (0);
}

static int	is_vc(const char c)
{
	return (ft_isdigit(c) || c == '.');
}

static int	is_valid(const char *str)
{
	int		i;
	int		fl_st;

	i = 0;
	while (str[++i] != '\0')
	{
		if (is_convert(str[i]))
			return (i + 1);
		if((fl_st = is_flag(&str[i])) > 1)
			i += fl_st - 1;
		else if (!is_vc(str[i]) && !fl_st)
			return (0);
	}
	return (0);
}

int			ft_validconv(const char *format)
{
	int		sz_f;

	if (format[0] != '%')
		return (0);
//	printf("format is: '%s'", format);
	if (!(sz_f = is_valid(format)))
		return (0);
//	printf("is valid !\n");
//	printf("Size: %d!\n", sz_f);
	return (sz_f);
}