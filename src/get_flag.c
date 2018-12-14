/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 02:01:05 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 22:48:42 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "globales.h"

int		get_flag(const char *c, enum e_flags *flag)
{
	int		i;

	i = 0;
	while (g_flags[i].flags_id != end)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
		if (ft_strncmp(g_flags[i].c_val, c, ft_strlen(g_flags[i].c_val)) == 0)
		{
			*flag = g_flags[i].flags_id;
			return (ft_strlen(g_flags[i].c_val));
		}
		i++;
	}
	return (0);
}