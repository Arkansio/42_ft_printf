/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 02:14:44 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/12 02:55:25 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

t_list		*ft_parse(const char *format)
{
    int		i;
	t_list	**alst;

	i = -1;
	alst = NULL;
	if (!(alst = (t_list**)(malloc(sizeof(t_list*)))))
		return (NULL);
	*alst = NULL;
	while (format[++i] != '\0')
	{
//		if (format[i] == '%')
//			i += ft_convert(format[i], alst);
	}
    return (*alst);
}