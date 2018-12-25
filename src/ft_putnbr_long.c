/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 00:42:15 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/25 23:58:16 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_check_ex(long long nb)
{
	if (nb == LLONG_MIN)
	{
		ft_putchar('9');
		return (1);
	}
	return (0);
}

void		ft_putnbr_long(long long n)
{
	long long temp;
	long long size;
	int nb_res;

	temp = n;
	size = 1;
	if (n < 0)
	{
		if (ft_check_ex(n))
		{
			ft_putnbr_long(223372036854775808);
			return ;
		}
		n = -n;
	}
	while (temp /= 10)
		size *= 10;
	while (size)
	{
		nb_res = (n / size) % 10;
		size /= 10;
		ft_putchar('0' + nb_res);
	}
}
