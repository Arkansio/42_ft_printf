/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:11:43 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/14 00:39:59 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	tdst = (unsigned char*)dst;
	tsrc = (unsigned char*)src;
	if (tsrc < tdst)
		while ((int)--len >= 0)
			*(tdst + len) = *(tsrc + len);
	else
		ft_memcpy(tdst, tsrc, len);
	return (dst);
}
