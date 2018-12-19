/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 22:33:20 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/19 01:14:46 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int			contain_flag(t_proper *props, enum e_flags flag)
{
	t_list	*tmp;

	tmp = props->flags;
	while (tmp)
	{
		if (*((int*)tmp->content) == flag)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int			_p_string(t_proper *properties, va_list *args)
{
    char	*str;
	int		chain_z;

	str = va_arg(*args, char *);
	chain_z = (int)ft_strlen(str);
	if (properties->precision != -1 && properties->precision < chain_z)
		chain_z = properties->precision;
	if (properties->min_w >= chain_z && !contain_flag(properties, minus))
		ft_write_multiple(properties->min_w - chain_z, contain_flag(properties, zero) ? '0' : ' ');
	if (properties->precision == -1 || properties->precision > chain_z)
		ft_putfaststr(str, chain_z);
    else
		ft_putfaststr(str, properties->precision);
	if (properties->min_w > chain_z && contain_flag(properties, minus))
		ft_write_multiple(properties->min_w - chain_z, ' ');
	if (properties->min_w > chain_z)
    	return (properties->min_w);
	else
		return (chain_z);
}