/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_min_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 20:20:31 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:31:37 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int		pass_min_width(const char *str, int max)
{
	int		i;

	i = 0;
	if (ft_isdigit(str[i]) && str[i] != '0')
	{
		while (ft_isdigit(str[i]) && i < max)
			i++;
		return (i);
	}
	return (0);
}
