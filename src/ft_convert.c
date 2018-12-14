/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:43:50 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 20:48:16 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globales.h"
  
void        ft_convert(t_list **lst, const char *str, int max)
{
    t_proper    properties;

    properties.value = (void*)str;
    properties.precision = get_precision(str, max);
    properties.min_w = get_min_width(str, max);
    (void)lst;
    printf("Value is: %s\n", (char*)properties.value);
    printf("Precision: %d\n", properties.precision);
    printf("Min_width: %d\n\n", properties.min_w);
}