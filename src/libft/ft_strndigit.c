/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:05:38 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/15 14:07:36 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strndigit(char *str, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}