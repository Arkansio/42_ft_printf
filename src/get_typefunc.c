/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_typefunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 02:12:11 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/16 00:40:23 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "globales.h"

int 	get_typefunc(const char c)
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