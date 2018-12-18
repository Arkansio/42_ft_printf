/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:43:50 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/18 22:09:02 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globales.h"

int			ft_convert(const char *str, int max, va_list *args)
{
	t_proper    properties;
	int			i_tab;
	char		*new_str;

	new_str = NULL;
	ft_parse_properties(&properties, str, max);
	i_tab = get_typefunc(str[max - 1]);

//	printf("\nPrecision: %d\n", properties.precision);
//	printf("Min_width: %d\n\n", properties.min_w);
	if (max == 1)
		return (0);
	if (i_tab != -1)
		return (g_types[i_tab].func(&properties, args));
	ft_write_multiple(properties.min_w - 1, ' ');
	return (properties.min_w >= 0 ? properties.min_w : 0);
}