/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_rd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 01:54:39 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/15 23:57:24 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_parse_rd(const char *str, va_list *ap)
{
	t_list	*new;

	new = NULL;
	if (!(new = ft_parse(str, ap)))
		exit(1);
	ft_strlst_read(&new);
//	ft_putstr(new);
}