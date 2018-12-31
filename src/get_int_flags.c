/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 18:59:24 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/31 22:51:54 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

long long int get_int_flags(t_proper *properties, va_list *args)
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