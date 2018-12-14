/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:43:50 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 21:25:45 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globales.h"
  
void        ft_convert(t_list **lst, const char *str, int max)
{
    t_proper    properties;

    ft_parse_properties(&properties, str, max);
    (void)lst;
    printf("Precision: %d\n", properties.precision);
    printf("Min_width: %d\n\n", properties.min_w);
}