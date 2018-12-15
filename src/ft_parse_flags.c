/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 21:46:34 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/15 03:41:47 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static void		add_flag(t_list **lst, enum e_flags *flag)
{
	t_list		 *new;

	new = NULL;
	printf("Flag : %d\n", (int)*flag);
	printf("OK\n");
	if (!(new = ft_lstnew((void*)flag, sizeof(flag))))
	{
		printf("\nFailure -> ft_parse_flags.c (ft_lstnew)\n");
		exit(EXIT_FAILURE);
	}
	ft_lstaddend(lst, new);
}

void			ft_parse_flags(t_list **lst, const char *str, int max)
{
	int				i;
	enum e_flags	flag;
	int				sz;

	i = 0;
	printf("Max -> %d\n", max);
	while (++i < max)
	{
		if ((sz = pass_precision(&str[i], max)) >= 1)
			i += sz - 1;
		else if((sz = get_flag(&str[i], &flag)))
			add_flag(lst, &flag);
		printf("While -> %d\n", i);
	}
}