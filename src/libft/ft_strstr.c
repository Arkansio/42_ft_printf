/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:34:48 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/12 02:07:19 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		sz;

	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	sz = ft_strlen(to_find);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, sz) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
