/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:45:43 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/12 20:11:43 by mgessa           ###   ########.fr       */
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
			return (1);
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

	i = -1;
	while (str[++i] != '\0')
	{
		if (!is_vc(str[i]) && !is_flag(&str[i]))
			return (0);
		if (is_convert(str[i]))
			return (1);
	}
	return (0);
}

int			ft_convert(const char *format, t_list **lst)
{
	int		sz_f;

	(void)lst;
	if (!(sz_f = is_valid(format)))
		return (0);
	return (1);
}