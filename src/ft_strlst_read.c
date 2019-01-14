/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlst_read.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:48:21 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 01:38:43 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_strlst_read(t_list **alst)
{
	t_list	*tmp;

	if (!alst)
		return ;
	tmp = alst[0];
	while (tmp)
	{
		printf("%s", (char*)tmp->content);
		tmp = tmp->next;
	}
}
