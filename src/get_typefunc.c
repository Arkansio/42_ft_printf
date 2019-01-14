/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_typefunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 02:12:11 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:32:55 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "globales.h"

int		get_typefunc(const char c)
{
	int		i;

	i = 0;
	while (g_types[i].func != NULL)
	{
		if (g_types[i].type == c)
			return (i);
		i++;
	}
	return (-1);
}
