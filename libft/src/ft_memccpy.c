/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:00:32 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 18:48:54 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	size_t			i;
	unsigned char	*tsrc;
	unsigned char	*tdst;

	tsrc = (unsigned char*)src;
	tdst = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		tdst[i] = tsrc[i];
		if (tdst[i] == (unsigned char)c)
			return (tdst + i + 1);
		i++;
	}
	return (NULL);
}
