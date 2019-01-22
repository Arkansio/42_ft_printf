/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 21:46:34 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/22 02:18:35 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int		add_flag(t_list **lst, enum e_flags flag)
{
	t_list		*n_flag;

	n_flag = NULL;
	if (!(n_flag = ft_lstnew((void*)&flag, sizeof(enum e_flags))))
		return (0);
	(void)lst;
	ft_lstaddend(lst, n_flag);
	return (1);
}

int				ft_parse_flags(t_list **lst, const char *str, int max)
{
	int				i;
	enum e_flags	flag;
	int				sz;

	i = 0;
	while (++i < max)
	{
		if ((sz = pass_precision(&str[i], max)) >= 1)
			i += sz - 1;
		else if ((sz = pass_min_width(&str[i], max)) >= 1)
			i += sz - 1;
		else if ((sz = get_flag(&str[i], &flag)))
		{
			i += sz - 1;
			if (!add_flag(lst, flag))
				return (-1);
		}
	}
	return (1);
}
