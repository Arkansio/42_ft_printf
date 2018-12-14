/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 02:12:11 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 02:14:41 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "globales.h"

void 	*get_convert(const char c)
{
	int		i;

	i = 0;
	while (g_types[i].func != NULL)
	{
		if (g_types[i].type == c)
			return (g_types->func);
		i++;
	}
	return (0);
}