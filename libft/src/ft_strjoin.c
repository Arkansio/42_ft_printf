/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:51:28 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/19 19:16:28 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sz1;
	int		sz2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	sz1 = ft_strlen(s1);
	sz2 = ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * (sz1 + sz2 + 1))))
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	str[sz1 + sz2] = '\0';
	return (str);
}
