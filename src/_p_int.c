/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 22:33:28 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/25 06:18:21 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <limits.h>

static int	int_size(long long int nb)
{
    int     i;

    i = 1;
	if (nb < 0)
		i++;
    while (nb /= 10)
        i++;
    return (i);
}

static void		decrement(int *c, int nb)
{
	*c -= nb;
	if (*c < 0)
		*c = 0;
}

static void  first_pad(int sz, t_proper *properties, int *total_sz, long long val)
{
    int precision;
    int min_width;
    int space_z;

    min_width = 0;
    precision = 0;
    if (properties->precision != -1)
        precision = properties->precision;
    if (properties->min_w != -1)
    {
        min_width = properties->min_w;
        if ((contain_flag(properties, space) || contain_flag(properties, plus)) && val > 0)
            decrement(&min_width, 1);
    }
	if ((contain_flag(properties, space) || contain_flag(properties, plus)) && val > 0)
		*total_sz += 1;
	if (contain_flag(properties, plus) && val > 0)
		ft_putchar('+');
    else if (contain_flag(properties, space) && val > 0)
        ft_putchar(' ');
    if (min_width > precision && (min_width - sz) > 0)
        space_z = min_width - sz;
    else
        space_z = 0;
    if (precision > sz)
        space_z -= (precision - sz);
//    printf("min width: [%d]\n", min_width);
    if (min_width > sz && !contain_flag(properties, minus))
        ft_write_multiple(space_z, contain_flag(properties, zero) ? '0' : ' ');
	*total_sz += space_z;
    if (precision > sz)
	{
        ft_write_multiple(precision - sz, '0');
		*total_sz += (precision - sz);
	}
}

static void  second_pad(int sz, t_proper *properties, long long val)
{
    int precision;
    int min_width;
    int space_z;

    min_width = 0;
    precision = 0;
    if (properties->precision != -1)
        precision = properties->precision;
    if (properties->min_w != -1)
    {
        min_width = properties->min_w;
        if ((contain_flag(properties, space) || contain_flag(properties, plus)) && val > 0)
            min_width--;
    }
    if (min_width > precision)
        space_z = min_width - sz;
    else
        space_z = 0;
    if (precision > sz)
        space_z -= (precision - sz);
//    printf("min width: [%d]\n", min_width);
    if (min_width > sz && contain_flag(properties, minus))
        ft_write_multiple(space_z, ' ');
}

int				_p_int(t_proper *properties, va_list *args)
{
    long long int	val;
    int             sz;
    char            *str;
	int				total_sz;

//	printf("Precision: %d\n", properties->precision);
    val = 0;
	total_sz = 0;
    if (properties->precision == -1)
        properties->precision = 1;
    if (contain_flag(properties, ll))
        val = va_arg(*args, long long int);
    else if (contain_flag(properties, l))
        val = (long long int)va_arg(*args, long int);
    else if (contain_flag(properties, h))
        val = (long long int)(short int)va_arg(*args, int);
    else if (contain_flag(properties, hh))
        val = (long long int)(char)va_arg(*args, int);
    else
        val = (long long int)va_arg(*args, int);
	sz = int_size(val);
//	print_first_padding(properties, &sz);
//	printf("\nSize: %d\n", sz);
    if (val != 0)
    {
	    str = itoa_long(val);
        first_pad(sz, properties, &total_sz, val);
        ft_putfaststr(str, -1);
		second_pad(sz, properties, val);
		total_sz += ft_strlen(str);
        free(str);
    }
//    printf("Size: %d\n", sz);
//	print_end_padding(properties, &sz); 
	return (total_sz);
}