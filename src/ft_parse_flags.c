/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 21:46:34 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/15 20:10:37 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static void		add_flag(t_list **lst, enum e_flags flag)
{
	t_list		*n_flag;

	n_flag = NULL;
	if(!(n_flag = ft_lstnew((void*)&flag, sizeof(enum e_flags))))
		exit(EXIT_FAILURE);
//	printf("\nflag -> %d ->\n", flag);
//	printf("lst -> %d\n\n", (*((enum e_flags*)n_flag->content)));
	(void)lst;
	ft_lstaddend(lst, n_flag);
}

void			ft_parse_flags(t_list **lst, const char *str, int max)
{
	int				i;
	enum e_flags	flag;
	int				sz;

	i = 0;
	printf("Str: %s\n", str);
	printf("Max -> %d\n", max);
	while (++i < max)
	{	
		if ((sz = pass_precision(&str[i], max)) >= 1)
			i += sz - 1;
		else if((sz = get_flag(&str[i], &flag)))
		{
			i += sz - 1;
			add_flag(lst, flag);
		}
		printf("While -> %d\n", i);
	}
	printf("Fin -> %d\n", i);
}