/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 22:33:20 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:56:04 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int		_p_string(t_proper *properties, va_list *args)
{
    char	*str;
	int		chain_z;

	str = va_arg(*args, char *);
	chain_z = (int)ft_strlen(str);
	if (str == NULL)
		chain_z = 6;
	if (str == NULL && properties->precision == 0)
		chain_z = 0;
	if (properties->precision != -1 && properties->precision < chain_z)
		chain_z = properties->precision;
	print_first_padding(properties, &chain_z);
	if (str == NULL && properties->precision != 0)
		ft_putfaststr("(null)", -1);
	else if (properties->precision == -1 || properties->precision > chain_z)
		ft_putfaststr(str, chain_z);
	else if (str != NULL)
		ft_putfaststr(str, properties->precision);
	print_end_padding(properties, &chain_z);
	if (properties->min_w > chain_z)
    	return (properties->min_w);
	else
		return (chain_z);
}
