/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_properties.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 20:39:16 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 21:26:26 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void        ft_parse_properties(t_proper *proper, const char *str, int max)
{
    proper->precision = get_precision(str, max);
    proper->min_w = get_min_width(str, max);
}