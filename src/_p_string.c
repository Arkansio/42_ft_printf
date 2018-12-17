/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 22:33:20 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/17 02:48:58 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int			_p_string(t_proper *properties, va_list *args)
{
    char	*str;
	int		chain_z;

	str = va_arg(*args, char *);
	chain_z = ft_strlen(str);
 //   printf("o-o-o-o-o _p_string o-o-o-o-o\n\n");
	if (properties->min_w > chain_z)
		ft_write_multiple(properties->min_w - chain_z, ' ');
	if (properties->precision == -1 || properties->precision > chain_z)
		ft_putfaststr(str, chain_z + 1);
    else
		ft_putfaststr(str, properties->precision);
	if (properties->min_w > chain_z)
    	return (properties->min_w);
	else
		return (chain_z);
}