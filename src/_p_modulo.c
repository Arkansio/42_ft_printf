/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_modulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 23:54:06 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/17 00:23:42 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char        *_p_modulo(t_proper *properties, va_list *args)
{
    (void)properties;
    (void)args;

    ft_putfaststr("%%", 1);
    return (NULL);
}