/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 00:42:15 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/25 06:26:11 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void		ft_load_itoa(char *str, long long int n, long long int size)
{
	int		i;

	i = 0;
	while (size)
	{
		str[i++] = '0' + n / size % 10;
		size /= 10;
	}
}

static void		ft_check_size(long long int *size, int *sz_i, long long int tmp)
{
	while (tmp /= 10)
	{
		*size *= 10;
		(*sz_i)++;
	}
}

static char		*ft_min_int(void)
{
	char	*str;

	if (!(str = ft_strnew(19)))
		return (NULL);
	ft_strcpy(str, "9223372036854775808"); 
	return (str);
}

char			*itoa_long(long long int n)
{
	long long int		size;
	int		symbol;
	char	*str;
	int		sz_i;

	sz_i = 1;
	size = 1;
	symbol = 0;
	if (n == LLONG_MIN)
		return (ft_min_int());
	if (n < 0)
	{
		n = -n;
	}
	ft_check_size(&size, &sz_i, n);
	if (!(str = ft_strnew(sz_i )))
		return (NULL);
	ft_load_itoa(str, n, size);
	return (str);
}
