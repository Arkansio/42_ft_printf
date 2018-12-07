/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 02:06:44 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/12 02:54:14 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sz1;
	size_t	sz2;
	size_t	i;

	i = 0;
	sz1 = 0;
	while (dst[sz1] != '\0' && sz1 < dstsize)
		sz1++;
	sz2 = ft_strlen(src);
	if (dstsize <= 0)
		return (sz1 + sz2);
	while (src[i] && sz1 + i < dstsize - 1)
	{
		dst[sz1 + i] = src[i];
		i++;
	}
	if (sz1 < dstsize)
		dst[sz1 + i] = '\0';
	return (sz1 + sz2);
}
