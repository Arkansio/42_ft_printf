/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:26:22 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/14 16:13:30 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

static int		ft_match(char const s)
{
	return ((s == ' ' || s == '\n') || (s == '\t'));
}

static void		ft_count_blank(char const *s, int *end_bl, int *srt_bl)
{
	int i;
	int sz;

	i = 0;
	sz = ft_strlen(s);
	while (s[i] != '\0' && ft_match(s[i]))
	{
		(*srt_bl)++;
		i++;
	}
	i = 0;
	while (i < sz && ft_match(s[sz - i - 1]))
	{
		(*end_bl)++;
		i++;
	}
}

char			*ft_strtrim(char const *s)
{
	int		end_bl;
	int		srt_bl;
	int		sz;
	char	*str;

	if (!s)
		return (NULL);
	end_bl = 0;
	srt_bl = 0;
	ft_count_blank(s, &end_bl, &srt_bl);
	sz = ft_strlen(s);
	sz -= srt_bl + end_bl;
	if (sz <= 0)
		sz = 0;
	if (!(str = ft_strnew(sz)))
		return (NULL);
	ft_strncpy(str, &s[srt_bl], sz);
	str[sz] = '\0';
	return (str);
}
