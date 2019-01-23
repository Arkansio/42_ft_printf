/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f_prefix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 01:56:38 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/23 02:16:49 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void				print_f_prefix(t_proper *properties, int *chain_sz,
long double db)
{
	if (contain_flag(properties, space) &&
	db >= 0 && !contain_flag(properties, plus))
	{
		ft_putchar(' ');
		(*chain_sz)++;
	}
	if (db < -0.0 || is_neg((float)db))
	{
		ft_putchar('-');
		(*chain_sz)++;
	}
	else if (contain_flag(properties, plus) && db >= 0)
	{
		ft_putchar('+');
		(*chain_sz)++;
	}
}
