/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_rd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 02:14:44 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/18 02:36:41 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int			ft_parse_rd(const char *format, va_list *args)
{
    int		i;
	int		sz_cast;
	int		total_sz;
	int		sz_convert;

	total_sz = 0;
	i = -1;
	while (format[++i] != '\0')
	{
		if((sz_cast = ft_validconv(&format[i])))
		{
			ft_putfaststr(format, i);
//			total_sz += i;
			if ((sz_convert = ft_convert(&format[i], sz_cast, args)) == -1)
				return (-1);
			total_sz += sz_convert;
			format += i + sz_cast;
			i = 0;
		}
		else if (format[i + 1] == '\0')
		{
			total_sz += i + 1;
			ft_putfaststr(format, -1);
		}
	}
	printf("El gato %d\n", total_sz);
    return (total_sz);
}