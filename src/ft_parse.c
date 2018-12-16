/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 02:14:44 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/16 23:04:34 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

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
			ft_putfaststr((char*)format, i);
			ft_convert(&alst, &format[i], sz_cast, args);
			format += i + sz_cast;
			i = 0;
		}
		else if (format[i + 1] == '\0')
			ft_putfaststr((char*)format, -1);
	}
    return (alst);
}