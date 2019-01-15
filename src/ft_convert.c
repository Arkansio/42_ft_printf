/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:43:50 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/15 20:41:05 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globales.h"

static void		delete_flag(void *content, size_t sz)
{
	(void)sz;
	free(content);
}

int				ft_convert(const char *str, int max, va_list *args)
{
	t_proper	properties;
	int			i_tab;
	char		*new_str;
	int			copy_l;

	new_str = NULL;
	ft_parse_properties(&properties, str, max);
	i_tab = get_typefunc(str[max - 1]);

	if (max == 1)
	{
		ft_lstdel(&properties.flags, delete_flag);
		return (0);
	}
	if (i_tab != -1)
	{
		copy_l = g_types[i_tab].func(&properties, args);
		ft_lstdel(&properties.flags, delete_flag);
		return (copy_l);
	}
	copy_l = contain_flag(&properties, zero) ? '0' : ' ';
	ft_write_multiple(properties.min_w - 1, copy_l);
	ft_lstdel(&properties.flags, delete_flag);
	return (properties.min_w >= 0 ? properties.min_w - 1 : 0);
}
