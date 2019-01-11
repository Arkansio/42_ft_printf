/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 23:36:25 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/11 02:02:35 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int      calcul_blank_w(t_proper *properties, int str_sz)
{
    int     sz;

	if (properties->precision == 0)
		str_sz--;
    if (properties->min_w == -1)
        return (0);
	sz = str_sz;
    if (sz < properties->min_w)
        return (properties->min_w - sz);
    return (0);
}

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

static void			print_decimal(long long decimal, t_proper *properties)
{
	int		sz;

	sz = ft_ll_size(decimal);
	if (decimal != 0)
		ft_putnbr_long(decimal);
	else
		sz = 0;
	if (sz < properties->precision)
		ft_write_multiple(properties->precision - sz, '0');	
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
	if (contain_flag(properties, space) && db >= 0)
	{
		ft_putchar(' ');
		chain_sz++;
	}
    decimal = get_decimal(db, properties->precision);
	if (!contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, chain_sz), contain_flag(properties, zero) ? '0' : ' ');
	ft_putnbr_long((long long)db);
	ft_putchar('.');
	print_decimal((long long)decimal, properties);
	if (contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, chain_sz), ' ');
	if (properties->min_w > chain_sz)
		chain_sz += (properties->min_w - chain_sz);
    return (chain_sz);
}