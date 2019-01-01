/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_uint_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 22:56:57 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/01 21:44:34 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "struct.h"

long long int get_uint_flags(t_proper *properties, va_list *args)
{
    if (contain_flag(properties, ll))
        return va_arg(*args, long long);
    else if (contain_flag(properties, l))
        return (long long int)va_arg(*args, long);
    else if (contain_flag(properties, h))
        return (long long int)(short int)va_arg(*args, unsigned int);
    else if (contain_flag(properties, hh))
        return (long long int)(char)va_arg(*args, unsigned int);
    else
        return (long long int)va_arg(*args, unsigned int);
}