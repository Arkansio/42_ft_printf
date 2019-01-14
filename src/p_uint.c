/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_uint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 00:47:53 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 22:47:10 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int			calcul_blank_w(t_proper *properties, unsigned long long val)
{
	int		sz;

	if (properties->min_w == -1)
		return (0);
	sz = ft_ll_size(val);
	if (val == 0 && properties->precision == 0)
		sz--;
	if (properties->precision > sz)
		sz = properties->precision;
	if (sz < properties->min_w)
		return (properties->min_w - sz);
	return (0);
}

static int			print_prefix(t_proper *properties)
{
	if (properties->precision == -1)
		properties->precision = 1;
	return (0);
}

static char			can_set_zero(t_proper *properties, int int_sz)
{
	if (properties->precision > int_sz)
		return (' ');
	else
		return (contain_flag(properties, zero) ? '0' : ' ');
}

int					p_uint(t_proper *properties, va_list *args)
{
	unsigned long long int	val;
	int						total_sz;
	int						int_sz;

	val = 0;
	total_sz = 0;
	can_ignore_zero(properties);
	val = get_uint_flags(properties, args);
	int_sz = ft_ull_size(val);
	if (contain_flag(properties, zero))
		total_sz += print_prefix(properties);
	if (!contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, val), can_set_zero(properties, int_sz));
	if (!contain_flag(properties, zero))
		total_sz += print_prefix(properties);
	if (properties->precision > int_sz)
		total_sz += (properties->precision - int_sz);
	if (properties->precision > int_sz)
		ft_write_multiple(properties->precision - int_sz, '0');
	if (!(val == 0 && properties->precision == 0))
		ft_putnbr_ullong(val);
	else
		int_sz--;
	if (contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, val), ' ');
	return (total_sz + calcul_blank_w(properties, val) + int_sz);
}