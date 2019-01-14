/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ullong.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 01:47:59 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:36:45 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void		ft_putnbr_ullong(unsigned long long n)
{
	unsigned long long	temp;
	unsigned long long	size;
	int					nb_res;

	temp = n;
	size = 1;
	while (temp /= 10)
		size *= 10;
	while (size)
	{
		nb_res = (n / size) % 10;
		size /= 10;
		ft_putchar('0' + nb_res);
	}
}
