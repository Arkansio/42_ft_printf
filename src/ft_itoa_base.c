/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 23:38:34 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:43:50 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int		ft_zero(char *str, unsigned long long val)
{
	if (val != 0)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (1);
}

char	*ft_itoa_base(unsigned long long value, int base, char starting)
{
	char	*val;
	int		i;

	i = 0;
	if (!(val = malloc(sizeof(char) * 30)))
		return (NULL);
	if (ft_zero(val, value))
		return (val);
	while (value != 0)
	{
		if (value % base >= 10)
			val[i++] = starting + (value % base) % 10;
		else
			val[i++] = '0' + value % base;
		value /= base;
	}
	val[i] = '\0';
	ft_strrev(val);
	return (val);
}
