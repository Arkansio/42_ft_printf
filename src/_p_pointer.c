/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 05:11:05 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/06 20:50:10 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int      calcul_blank_w(t_proper *properties, int str_sz)
{
    int     sz;

    if (properties->min_w == -1)
        return (0);
	sz = str_sz;
	if (properties->precision > sz - 2)
        sz = properties->precision + 2;
    if (sz < properties->min_w)
        return (properties->min_w - sz);
    return (0);
}

static void     print_all(t_proper *properties, char *str, int sz_result)
{
	if (!contain_flag(properties, minus) && !contain_flag(properties, zero))
		ft_write_multiple(calcul_blank_w(properties, sz_result), ' ');
	ft_putfaststr("0x", -1);
	if (!contain_flag(properties, minus) && contain_flag(properties, zero))
		ft_write_multiple(calcul_blank_w(properties, sz_result), '0');
	if (properties->precision > (sz_result - 2))
        ft_write_multiple(properties->precision - (sz_result - 2), '0');
	if (!(properties->precision == 0 && str[0] == '0'))
		ft_putfaststr(str, -1);
	if (contain_flag(properties, minus))
		ft_write_multiple(calcul_blank_w(properties, sz_result), ' ');
}

int				_p_pointer(t_proper *properties, va_list *args)
{
	char			*str;
	long long		val;
	int			sz_result;
	int			total_sz;

	total_sz = 0;
	val = va_arg(*args, long);
	str = ft_itoa_base(val, 16, 'a');
	sz_result = (int)ft_strlen(str) + 2;
	if (properties->precision == 0 && val == 0)
		sz_result--;
    print_all(properties, str, sz_result);
	total_sz += calcul_blank_w(properties, sz_result) + sz_result;
	if (properties->precision > (sz_result - 2))
        total_sz += properties->precision - (sz_result - 2);
	return (total_sz);
}