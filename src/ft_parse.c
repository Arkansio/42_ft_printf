/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 02:14:44 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/15 23:58:36 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static void		add_part(const char *format, t_list **alst, int i, int sz_cast)
{
	char	*new;
	t_list	*lst;

	new = ft_strsub(format, 0, (size_t)i);
	if (!new)
		exit(EXIT_FAILURE);
	if (!(lst = ft_lstnew((void*)new, (size_t)(i + sz_cast))))
		exit(EXIT_FAILURE);
	free(new);
	ft_lstaddend(alst, lst);
}

t_list			*ft_parse(const char *format, va_list *args)
{
    int		i;
	int		sz_cast;
	
	t_list	*alst;

	i = -1;
	alst = NULL;
	while (format[++i] != '\0')
	{
		if((sz_cast = ft_validconv(&format[i])))
		{
			add_part(format, &alst, i, sz_cast);
			ft_convert(&alst, &format[i], sz_cast, args);
			format += i + sz_cast;
			i = 0;
		}
		else if (format[i + 1] == '\0')
			add_part(format, &alst, ft_strlen(format), ft_strlen(format));
	}
    return (alst);
}