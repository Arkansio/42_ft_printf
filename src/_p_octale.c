/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_octale.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 16:29:25 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/29 01:41:18 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int				_p_octale(t_proper *properties, va_list *args)
{
	char	*str;

	(void)properties;
	str = ft_itoa_base(va_arg(*args, int), 8);
	ft_putfaststr(str, -1);
	return (1);
}