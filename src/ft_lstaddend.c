/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 22:47:19 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/14 01:28:19 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
    t_list	*tmp;

	if (!alst || !new)
		return ;
//	printf("New content: %s\n\n", (char*)new->content);
    if(!alst[0])
	{
//		printf("[add first index]");
    	*alst = new;
		return ;
	}
    tmp = *alst;
    while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}