/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 21:22:12 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/19 03:53:13 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "struct.h"

int			_p_char(t_proper *properties, va_list *args)
{
    unsigned char   c;
	int				chain_z;

	c = (unsigned char)va_arg(*args, int);
	chain_z = 1;
 //   printf("o-o-o-o-o _p_string o-o-o-o-o\n\n");
	print_first_padding(properties, &chain_z);
	if (properties->precision < 1)
		chain_z = 1;
    write(1, &c, 1);
	print_end_padding(properties, &chain_z);
	return (chain_z);
}