/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:59:58 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 18:43:25 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_ex(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		return (1);
	}
	return (0);
}

void		ft_putnbr(int n)
{
	int temp;
	int size;
	int nb_res;

	temp = n;
	size = 1;
	if (n < 0)
	{
		if (ft_check_ex(n))
		{
			ft_putnbr(147483648);
			return ;
		}
		ft_putchar('-');
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
