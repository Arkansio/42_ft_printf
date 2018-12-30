/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 23:38:34 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/30 17:03:55 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static char		*ft_get_min(char *dest)
{
	int i;
	char tab[] = "-2147483648";
	i = 0;
	while (tab[i])
	{
		dest[i] = tab[i];
		i++;
	}
	dest[i] = '\0';
    return (dest);
}

static int		ft_zero(char *str, int val)
{
	if (val != 0)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (1);
}

char	*ft_itoa_base(int value, int base)
{
	char *val;
	int i;
	int is_neg;

	is_neg = 0;
	i = 0;
	if (!(val = malloc(sizeof(char) * 30)))
		return (NULL);
	if (ft_zero(val, value))
		return (val);
    if (base < 2 || base > 16)
	{
		val[0] = '\0';
		return (val);
	}
	if (base == 10 && value < 0)
	{
		if (value == -2147483648)
            return ft_get_min(val);
		value *= -1;
    }
	else if (value < 0)
		value *= -1;
	while (value != 0)
	{
		if (value % base >= 10)
			val[i++] = 'A' + (value % base) % 10;
		else
			val[i++] = '0' + value % base;
		value /= base;
	}
	if (base == 10 && is_neg == 1)
		val[i++] = '-';
	val[i] = '\0';
	ft_strrev(val);
	return (val);
}
