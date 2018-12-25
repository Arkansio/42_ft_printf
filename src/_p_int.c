/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 22:33:28 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/25 04:44:26 by mgessa           ###   ########.fr       */
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

/*
static void		ft_putnbrl(long long n)
{
	long long temp;
	long long size;
	long long nb_res;

	temp = n;
	size = 1;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (temp /= 10)
		size *= 10;
	while (size)
	{
		nb_res = (n / size) % 10;
		size /= 10;
		ft_putchar('0' + nb_res);
	}
} */

static void  first_pad(int sz, t_proper *properties)
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
        if (contain_flag(properties, space))
            min_width--;
    }
    if (contain_flag(properties, space))
        ft_putchar(' ');
    if (min_width > precision)
        space_z = min_width - sz;
    else
        space_z = 0;
    if (precision > sz)
        space_z -= (precision - sz);
//    printf("min width: [%d]\n", min_width);
    if (min_width > sz && !contain_flag(properties, minus))
        ft_write_multiple(space_z, contain_flag(properties, zero) ? '0' : ' ');
    if (precision > sz)
        ft_write_multiple(precision - sz, '0');
}

static void  second_pad(int sz, t_proper *properties)
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
        if (contain_flag(properties, space))
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

//	printf("Precision: %d\n", properties->precision);
    val = 0;
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
        first_pad(sz, properties);
        ft_putfaststr(str, -1);
		second_pad(sz, properties);
        free(str);
    }
//    printf("Size: %d\n", sz);
//	print_end_padding(properties, &sz); 
	return (sz); 
}