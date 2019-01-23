/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_uint_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 22:56:57 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:32:00 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

unsigned long long	get_uint_flags(t_proper *properties, va_list *args)
{
	if (contain_flag(properties, ll))
		return (va_arg(*args, unsigned long long));
	else if (contain_flag(properties, l))
		return ((unsigned long long)va_arg(*args, unsigned long));
	else if (contain_flag(properties, h))
		return ((unsigned long long)
		(unsigned short)va_arg(*args, unsigned int));
	else if (contain_flag(properties, hh))
		return ((unsigned long long)(unsigned char)va_arg(*args, unsigned int));
	else
		return ((unsigned long long int)va_arg(*args, unsigned int));
}
