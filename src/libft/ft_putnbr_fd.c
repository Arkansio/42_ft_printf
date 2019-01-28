/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:07:44 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 20:33:15 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_ex_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		return (1);
	}
	return (0);
}

void			ft_putnbr_fd(int n, int fd)
{
	int temp;
	int size;
	int nb_res;

	temp = n;
	size = 1;
	if (n < 0)
	{
		if (ft_check_ex_fd(n, fd))
		{
			ft_putnbr_fd(147483648, fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (temp /= 10)
		size *= 10;
	while (size)
	{
		nb_res = (n / size) % 10;
		size /= 10;
		ft_putchar_fd('0' + nb_res, fd);
	}
}
