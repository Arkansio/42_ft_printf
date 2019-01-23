/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 22:47:46 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:30:20 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int		pass_precision(const char *str, int max)
{
	int		i;

	i = 0;
	if (str[i] == '.')
	{
		i++;
		while (ft_isdigit(str[i]) && i < max)
			i++;
	}
	return (i);
}
