/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:43:32 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/18 01:34:17 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "stdio.h"
#include "globales.h"

int		ft_printf(const char *format, ...)
{
    va_list ap;
    int     sz;

    va_start(ap, format);
    sz = ft_parse_rd(format, &ap);
    va_end(ap);

	return sz;
}
