/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 02:14:44 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/13 20:24:47 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

t_list		*ft_parse(const char *format)
{
    int		i;
	t_list	*alst;

	i = -1;
	alst = NULL;
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			i += ft_validconv(&format[i]);
			format += i;
		}
	}
    return (alst);
}