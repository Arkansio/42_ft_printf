/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:40:17 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/14 16:08:57 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	size;
	char			*str;
	unsigned int	i;

	i = 0;
	size = 0;
	str = NULL;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	if (!(str = ft_strnew(size)))
		return (NULL);
	while (i < size)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
