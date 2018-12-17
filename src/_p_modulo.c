/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_modulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 23:54:06 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/17 01:39:56 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void        ft_write_multiple(int sz, char c)
{
    while (sz-- > 0)
        write(1, &c, 1);
}

char        *_p_modulo(t_proper *properties, va_list *args)
{
    (void)args;

	printf("Properties: %d", properties->min_w);
	ft_write_multiple(properties->min_w - 1, ' ');
    ft_putfaststr("%%", 1);
    return (NULL);
}