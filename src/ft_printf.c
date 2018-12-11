/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:43:32 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/11 01:50:15 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "stdio.h"

int		ft_printf(const char *format, ...)
{
    (void)format;
    va_list ap;
    char    *s;

    va_start(ap, format);
    s = va_arg(ap, char *);
    printf("%s\n", s);
    va_end(ap);

	return 1;
}
