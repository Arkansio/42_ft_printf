/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_modulo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 23:54:06 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 22:48:01 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int			p_modulo(t_proper *properties, va_list *args)
{
	int		chain_z;

	(void)args;
	chain_z = 1;
	print_first_padding(properties, &chain_z);
	ft_putfaststr("%%", 1);
	print_end_padding(properties, &chain_z);
	return (chain_z);
}
