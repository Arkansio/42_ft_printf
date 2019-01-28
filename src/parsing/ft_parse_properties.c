/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_properties.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 20:39:16 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/28 18:00:33 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int				ft_parse_properties(t_proper *proper, const char *str, int max)
{
	proper->flags = NULL;
	proper->precision = get_precision(str, max);
	proper->min_w = get_min_width(str, max);
	if (ft_parse_flags(&proper->flags, str, max) == -1)
		return (-1);
	return (1);
}
