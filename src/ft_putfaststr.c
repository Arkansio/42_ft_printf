/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfaststr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 22:40:54 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/19 04:05:26 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void        ft_putfaststr(const char *str, int max)
{
	int     i;

	i = (int)ft_strlen(str);
	if (max != -1)
	{
		if (max < i)
			i = max;
	}
	if (i >= 1)
		write(1, str, i);
}