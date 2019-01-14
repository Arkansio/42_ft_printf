/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 20:43:03 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:33:23 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int		get_min_width(const char *str, int max)
{
	int		i;
	int		value;

	i = 0;
	value = -1;
	while (i < max)
	{
		i += pass_precision(&str[i], max);
		if (ft_isdigit(str[i]) && str[i] != '0')
		{
			value = ft_atoi(&str[i]);
			while (ft_isdigit(str[i]) && i < max)
				i++;
		}
		else
			i++;
	}
	return (value);
}
