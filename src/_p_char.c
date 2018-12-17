/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 21:22:12 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/17 23:06:42 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "struct.h"

int			_p_char(t_proper *properties, va_list *args)
{
    unsigned char   c;

	c = (unsigned char)va_arg(*args, int);

 //   printf("o-o-o-o-o _p_string o-o-o-o-o\n\n");
	if (properties->min_w > 1)
		ft_write_multiple(properties->min_w - 1, ' ');
    write(1, &c, 1);
	if (properties->min_w > 1)
    	return (properties->min_w);
	else
		return (1);
}