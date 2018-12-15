/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 23:36:25 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/16 00:16:07 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char        *_p_float(t_proper *properties, va_list *args)
{
    (void)properties;
    printf("_p_float\n");
    printf("%f", va_arg(*args, double));
    return (NULL);
}