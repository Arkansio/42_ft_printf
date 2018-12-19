/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 03:08:01 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/19 03:57:04 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void        print_first_padding(t_proper *properties, int *chain_z)
{
	if (properties->min_w > *chain_z && !contain_flag(properties, minus))
	{
		ft_write_multiple(properties->min_w - *chain_z, contain_flag(properties, zero) ? '0' : ' ');
		*chain_z = properties->min_w;
	}
}

void        print_end_padding(t_proper *properties, int *chain_z)
{
	if (properties->min_w > *chain_z && contain_flag(properties, minus))
	{
		ft_write_multiple(properties->min_w - *chain_z, ' ');
		*chain_z = properties->min_w;
	}
}