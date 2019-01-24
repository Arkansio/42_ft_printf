/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_udouble_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 02:09:54 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/24 02:26:41 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

long double		get_ldouble_flags(t_proper *properties, va_list *args)
{
	if (contain_flag(properties, L))
		return (va_arg(*args, long double));
	else
		return ((long double)va_arg(*args, double));
}
