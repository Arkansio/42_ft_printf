/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 23:36:25 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/10 02:43:20 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static double     get_decimal(double db, int precision)
{
	double val = (double)db;
	val -= (double)(int)val;
	while (precision--)
	{
		val *= 10.0f;
		if (precision == 0)
			val += (int)(val * 10.0f) % 10 >= 5 ? 1 : 0;
    }
	return val;
}


static void			print_decimal(double decimal)
{

}

int             _p_float(t_proper *properties, va_list *args)
{
    double  db;
	int		chain_sz;
	double	decimal;

	if (properties->precision == -1)
		properties->precision = 6;
    db = va_arg(*args, double);
	chain_sz = properties->precision + 1;
	chain_sz += ft_ll_size((long long)db);
	if (properties->min_w > chain_sz)
		chain_sz += (properties->min_w - chain_sz);
    decimal = get_decimal(db, properties->precision);
	ft_putnbr_long((long long)db);
	ft_putchar('.');
	ft_putnbr_long((long long)decimal);
    return (chain_sz);
}