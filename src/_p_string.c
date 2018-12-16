/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 22:33:20 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/16 23:08:21 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char        *_p_string(t_proper *properties, va_list *args)
{
    (void)properties;
//    printf("o-o-o-o-o _p_string o-o-o-o-o\n\n");
    ft_putfaststr(va_arg(*args, char *), properties->precision);
    return (NULL);
}