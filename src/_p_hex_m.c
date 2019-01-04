/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_hex_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 19:21:25 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/04 02:39:18 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int      calcul_blank_w(t_proper *properties, int str_sz, long long val)
{
    int     sz;

    if (properties->min_w == -1)
        return (0);
	sz = str_sz;
    if (val == 0 && properties->precision == 0)
        sz--;
    if (properties->precision > sz)
        sz = properties->precision;
    if (sz < properties->min_w)
        return (properties->min_w - sz);

    return (0);
}

int				_p_hex_m(t_proper *properties, va_list *args)
{
	char		*str;
	long long	val;
	int			sz_result;
	int			total_sz;

	total_sz = 0;
	val = get_uint_flags(properties, args);
	str = ft_itoa_base(val, 16);
	sz_result = (int)ft_strlen(str);
	if (properties->precision == -1)
		properties->precision = 1;
	if (properties->precision == 0 && val == 0)
		sz_result--;
	if (contain_flag(properties, diez) && ((properties->precision <= sz_result && val != 0) || (properties->precision == 0 && val == 0)))
		sz_result += 2;
	if (!contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, sz_result, val), contain_flag(properties, zero) ? '0' : ' ');
	if (properties->precision > sz_result)
        ft_write_multiple(properties->precision - sz_result, '0');
	if (contain_flag(properties, diez) && ((properties->precision <= sz_result && val != 0) || (properties->precision == 0 && val == 0)))
		ft_putfaststr("0x", -1);
	if (val != 0 || properties->precision != 0)
		ft_putfaststr(str, -1);
	if (contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, sz_result, val), ' ');
	total_sz += calcul_blank_w(properties, sz_result, val) + sz_result;
	if (properties->precision > sz_result)
		total_sz += (properties->precision - sz_result);
	return (total_sz);
}