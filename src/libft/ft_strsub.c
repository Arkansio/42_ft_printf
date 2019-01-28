/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:49:55 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 18:35:49 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = ft_strnew(len);
	if (!s || !str)
		return (NULL);
	while (i < len)
	{
		if (!s[i + start])
			return (NULL);
		str[i] = s[i + start];
		i++;
	}
	return (str);
}
