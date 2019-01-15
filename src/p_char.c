/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_char.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 21:22:12 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/15 20:59:39 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int			p_char(t_proper *properties, va_list *args)
{
	unsigned char	c;
	int				chain_z;

	c = (unsigned char)va_arg(*args, int);
	chain_z = 1;
	print_first_padding(properties, &chain_z);
	ft_putchar(c);
	print_end_padding(properties, &chain_z);
	return (chain_z);
}
