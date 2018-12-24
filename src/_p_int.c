/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 22:33:28 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/24 02:29:21 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int	int_size(long long int nb)
{
    int     i;

    i = 1;
    while (nb /= 10)
        i++;
    return (i);
}

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
}


int				_p_int(t_proper *properties, va_list *args)
{
    long long int		val;
    int             sz;
    (void)properties;

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
	ft_putnbrl(val);
//	print_end_padding(properties, &sz); 
	return (sz); 
}