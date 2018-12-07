/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:27:32 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/14 20:01:00 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static t_list	*ft_recursive(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new = f(lst);
	if (lst->next)
	{
		tmp = ft_recursive(lst->next, f);
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = tmp;
	}
	return (new);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	if (!lst || !f)
		return (NULL);
	return (ft_recursive(lst, f));
}
