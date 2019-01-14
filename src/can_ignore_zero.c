/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_ignore_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 02:14:20 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:55:22 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void		can_ignore_zero(t_proper *props)
{
	t_list	*tmp;

    if (props->precision < 0)
		return ;
	tmp = props->flags;
	while (tmp)
	{
		if (*((int*)tmp->content) == zero)
			(*((int*)tmp->content)) = end;
		tmp = tmp->next;
	}
	return ;
}
