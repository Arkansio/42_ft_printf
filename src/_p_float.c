/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 23:36:25 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/09 03:36:21 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static void     print_decimal(double db)
{
    db -= (double)(int)db;
	while (db != 0.0)
	{
		db *= 10;
		ft_putchar('0' + (int)db);
		db -= (double)(int)db;
		
    }
}

int             _p_float(t_proper *properties, va_list *args)
{
    double  db;

    db = va_arg(*args, double);
    ft_putnbr((int)db);
    ft_putchar('.');
    print_decimal(db);
    (void)properties;
    return (0);
}