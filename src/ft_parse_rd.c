/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_rd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 01:54:39 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/12 03:47:00 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_parse_rd(const char *str)
{
	t_list	*new;

	new = NULL;
	if (!(new = ft_parse(str)))
		exit(1);
//	ft_putstr(new);
}