/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 20:43:03 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 20:49:31 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int  pass_precision(const char *str, int max)
{
    int     i;

    i = 0;
    if (str[i] == '.')
    {
        i++;
        while (ft_isdigit(str[i]) && i < max)
            i++;
    }
    return (i);
}

int  get_min_width(const char *str, int max)
{
    int     i;
    int     value;

    i = 0;
    value = -1;
    while (i < max)
    {
        i += pass_precision(&str[i], max);
        if (ft_isdigit(str[i]) && str[i] != '0')
            value = ft_atoi(&str[i]);
        i++;
    }
    return (value);
}