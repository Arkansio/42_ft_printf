/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 22:33:28 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/19 04:43:32 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <limits.h>

static int		calcul_blank_w(t_proper *properties, long long val)
{
	int		sz;

	if (properties->min_w == -1)
		return (0);
	sz = ft_ll_size(val);
	if (val == 0 && properties->precision == 0)
		sz--;
	if (properties->precision > sz)
		sz = properties->precision;
	if (val < 0 || contain_flag(properties, space)
	|| contain_flag(properties, plus))
		sz++;
	if (sz < properties->min_w)
		return (properties->min_w - sz);
	return (0);
}

static int		print_prefix(t_proper *properties, long long val)
{
	if (properties->precision == -1)
		properties->precision = 1;
	if (val < 0)
		ft_putchar('-');
	else if (contain_flag(properties, plus))
		ft_putchar('+');
	else if (contain_flag(properties, space))
		(void)val;
	else
		return (0);
	return (1);
}

static char		can_set_zero(t_proper *properties, int int_sz)
{
	if (properties->precision > int_sz)
		return (' ');
	else
		return (contain_flag(properties, zero) ? '0' : ' ');
}

static void		print_all(t_proper *properties, int *int_sz, long long val)
{
	if (properties->precision > *int_sz)
		ft_write_multiple(properties->precision - *int_sz, '0');
	if (!(val == 0 && properties->precision == 0))
		ft_putnbr_long(val);
	else
		--(*int_sz);
	if (contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, val), ' ');
}

int				p_int(t_proper *properties, va_list *args)
{
	long long int	val;
	int				total_sz;
	int				int_sz;

	val = 0;
	total_sz = 0;
	can_ignore_zero(properties);
	val = get_int_flags(properties, args);
	int_sz = ft_ll_size(val);
	if ((contain_flag(properties, space) &&
	!contain_flag(properties, plus)) && val >= 0)
		ft_putchar(' ');
	if (contain_flag(properties, zero))
		total_sz += print_prefix(properties, val);
	if (!contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, val),
		can_set_zero(properties, int_sz));
	if (!contain_flag(properties, zero))
		total_sz += print_prefix(properties, val);
	if (properties->precision > int_sz)
		total_sz += (properties->precision - int_sz);
	print_all(properties, &int_sz, val);
	return (total_sz + calcul_blank_w(properties, val) + int_sz);
}
