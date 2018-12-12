/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:43:32 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/12 20:11:40 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "stdio.h"

int		ft_printf(const char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    ft_parse_rd(format);
    va_end(ap);

	return 1;
}
