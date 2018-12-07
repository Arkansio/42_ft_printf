/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:26:13 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/14 18:44:41 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static void	ft_recursive_delete(t_list *el, void (*del)(void *, size_t))
{
	if (el->next != NULL)
		ft_recursive_delete(el->next, del);
	del(el->content, el->content_size);
	free(el);
}

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return ;
	if (!alst[0])
		return ;
	ft_recursive_delete(alst[0], del);
	alst[0] = NULL;
}
