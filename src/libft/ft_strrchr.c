/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:27:20 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 18:35:00 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*value;

	i = 0;
	value = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			value = ((char*)&s[i]);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		value = ((char*)&s[i]);
	return (value);
}
