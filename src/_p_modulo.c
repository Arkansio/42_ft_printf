/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_modulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 23:54:06 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/18 03:37:03 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int		        _p_modulo(t_proper *properties, va_list *args)
{
    (void)args;

//	printf("Properties: %d", properties->min_w);
	ft_write_multiple(properties->min_w - 1, ' ');
    ft_putfaststr("%%", 1);
    if (properties->min_w > 1)
        return (properties->min_w);
    return (1);
}