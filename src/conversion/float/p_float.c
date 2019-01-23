/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_float.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 23:36:25 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/23 02:19:27 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int				calcul_blank_w(t_proper *properties, int str_sz)
{
	int		sz;

	if (properties->precision == 0)
		str_sz--;
	if (properties->min_w == -1)
		return (0);
	sz = str_sz;
	if (sz < properties->min_w)
		return (properties->min_w - sz);
	return (0);
}

static long double		get_decimal(long double val, int precision)
{
	val = (val < 0) ? -val : val;
	val -= (long double)(long long)val;
	if (precision >= 19)
		precision = 18;
	while (precision--)
		val *= 10.0;
	val += ((long long)(val * 10.0f)) % 10 >= 5 ? 1 : 0;
	return (long double)val;
}

static void				print_decimal(long double decimal, t_proper *properties,
int zero)
{
	int		sz;

	decimal = get_decimal(decimal, properties->precision);
	if (properties->precision == 0)
		return ;
	sz = ft_ll_size(decimal) + zero;
	ft_write_multiple(zero, '0');
	ft_putnbr_long(decimal);
	if (sz < properties->precision)
		ft_write_multiple(properties->precision - sz, '0');
}

static int				get_zero_before(double val, int precision)
{
	int		i;
	int		tmp;

	i = precision;
	val = (val < 0) ? -val : val;
	val -= (double)(int)val;
	if (precision >= 19)
		precision = 18;
	while (i--)
		val *= 10.0;
	val += ((long long)(val * 10.0f)) % 10 >= 5 ? 1 : 0;
	tmp = ft_ll_size((long long)val);
	if (tmp < precision)
		return (precision - tmp);
	return (0);
}

int						p_float(t_proper *properties, va_list *args)
{
	double	db;
	int		chain_sz;

	if (properties->precision == -1)
		properties->precision = 6;
	db = va_arg(*args, double);
	chain_sz = properties->precision + 1;
	chain_sz += ft_ll_size((long long)db);
	print_f_prefix(properties, &chain_sz, db);
	if (!contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, chain_sz),
		contain_flag(properties, zero) ? '0' : ' ');
	ft_putnbr_long((long long)db);
	if (properties->precision == 0 && !contain_flag(properties, diez))
		chain_sz--;
	else
		ft_putchar('.');
	print_decimal(db, properties, get_zero_before(db, properties->precision));
	if (contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, chain_sz), ' ');
	if (properties->min_w > chain_sz)
		chain_sz += (properties->min_w - chain_sz);
	return (chain_sz);
}
