/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 22:33:28 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/19 23:37:31 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int		int_size(int nb)
{
    int     i;

    i = 1;
    while (nb /= 10)
        i++;
    return (i);
}

int				_p_int(t_proper *properties, va_list *args)
{
    int		val;
    int		sz;
    (void)properties;

//	printf("Precision: %d\n", properties->precision);
    val = va_arg(*args, int);
	sz = int_size(val);
	print_first_padding(properties, &sz);
//	printf("\nSize: %d\n", sz);
	ft_putnbr(val);
	print_end_padding(properties, &sz);
	return (sz);
}