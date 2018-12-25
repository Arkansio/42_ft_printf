/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 22:33:28 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/25 23:49:26 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <limits.h>

static int	int_size(long long int nb)
{
    int     i;

    i = 1;
    while (nb /= 10)
        i++;
    return (i);
}

static long long int get_value(t_proper *properties, va_list *args)
{
    if (contain_flag(properties, ll))
        return va_arg(*args, long long int);
    else if (contain_flag(properties, l))
        return (long long int)va_arg(*args, long int);
    else if (contain_flag(properties, h))
        return (long long int)(short int)va_arg(*args, int);
    else if (contain_flag(properties, hh))
        return (long long int)(char)va_arg(*args, int);
    else
        return (long long int)va_arg(*args, int);
}

static int      calcul_blank_w(t_proper *properties, long long val)
{
    int     sz;

    if (properties->min_w == -1)
        return (0);
    sz = int_size(val);
    if (properties->precision > sz)
        sz = properties->precision;
    if (val < 0 || contain_flag(properties, space) || contain_flag(properties, plus))
        sz++;
    if (sz < properties->min_w)
        return (properties->min_w - sz);
    return (0);
}

static int     print_prefix(t_proper *properties, long long val)
{
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

int				_p_int(t_proper *properties, va_list *args)
{
    long long int	val;
    char            *str;
	int				total_sz;

//	printf("Precision: %d\n", properties->precision);
    val = 0;
	total_sz = 0;
    if (properties->precision == -1)
        properties->precision = 1;
    val = get_value(properties, args);
	str = itoa_long(val);
    if (contain_flag(properties, space) && !contain_flag(properties, plus))
        ft_putchar(' ');
    if (!contain_flag(properties, minus))
        ft_write_multiple(calcul_blank_w(properties, val), contain_flag(properties, zero) ? '0' : ' ');
    total_sz += print_prefix(properties, val);
    if (properties->precision > int_size(val))
        total_sz += (properties->precision - int_size(val));
    if (properties->precision > int_size(val))
        ft_write_multiple(properties->precision - int_size(val), '0');
    ft_putfaststr(str, -1);
    if (contain_flag(properties, minus))
        ft_write_multiple(calcul_blank_w(properties, val), ' ');
    free(str);
	return (total_sz + calcul_blank_w(properties, val) + int_size(val));
}