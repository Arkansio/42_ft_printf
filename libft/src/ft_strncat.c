/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:20:24 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 18:33:27 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int			i;
	size_t		pos_src;

	i = 0;
	while (dest[i] != '\0')
		i++;
	pos_src = 0;
	while (src[pos_src] && pos_src < n)
	{
		dest[i] = src[pos_src];
		pos_src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
