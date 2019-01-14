/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 21:46:34 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/14 02:08:36 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static void		add_flag(t_list **lst, enum e_flags flag)
{
	t_list		*n_flag;

	n_flag = NULL;
	if (!(n_flag = ft_lstnew((void*)&flag, sizeof(enum e_flags))))
		exit(EXIT_FAILURE);
	(void)lst;
	ft_lstaddend(lst, n_flag);
}

void			ft_parse_flags(t_list **lst, const char *str, int max)
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
			add_flag(lst, flag);
		}
	}
}
