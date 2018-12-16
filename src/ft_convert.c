/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:43:50 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/16 23:08:02 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globales.h"

void        ft_convert(t_list **lst, const char *str, int max, va_list *args)
{
	t_proper    properties;
	int			i_tab;
	char		*new_str;

	new_str = NULL;
	ft_parse_properties(&properties, str, max);
	i_tab = get_typefunc(str[max - 1]);

	(void)lst;
//	printf("\nPrecision: %d\n", properties.precision);
//	printf("Min_width: %d\n\n", properties.min_w);

	if (i_tab != -1)
	{
//		printf("\nNOT NULL !\nTYPE IS: %c\n\n", str[max - 1]);
		g_types[i_tab].func(&properties, args);
	}
}