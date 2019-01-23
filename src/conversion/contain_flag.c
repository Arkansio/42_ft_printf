/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contain_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 03:17:43 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/15 20:56:59 by mgessa           ###   ########.fr       */
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
