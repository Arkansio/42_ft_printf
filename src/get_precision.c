/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 20:41:30 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 20:49:38 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int  get_precision(const char *str, int max)
{
    int     i;
    int     val;

    i = 1;
    val = -1;
    while (i < max)
    {
        if (str[i] == '.')
            val = ft_atoi(&str[i + 1]);
        i++;
    }
    return (val);
}