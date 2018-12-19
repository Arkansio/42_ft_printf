/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 22:33:20 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/19 03:25:20 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int			_p_string(t_proper *properties, va_list *args)
{
    char	*str;
	int		chain_z;

	str = va_arg(*args, char *);
	chain_z = (int)ft_strlen(str);
	print_first_padding(properties, &chain_z);
	if (properties->precision == -1 || properties->precision > chain_z)
		ft_putfaststr(str, chain_z);
    else
		ft_putfaststr(str, properties->precision);
	print_end_padding(properties, &chain_z);
	if (properties->min_w > chain_z)
    	return (properties->min_w);
	else
		return (chain_z);
}