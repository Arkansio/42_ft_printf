/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:39:53 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 19:51:15 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_load_itoa(char *str, int n, int size)
{
	int		i;

	i = 0;
	while (size)
	{
		str[i++] = '0' + n / size % 10;
		size /= 10;
	}
}

static void		ft_check_size(int *size, int *sz_i, int tmp)
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

	if (!(str = ft_strnew(11)))
		return (NULL);
	ft_strcpy(str, "-2147483648");
	return (str);
}

char			*ft_itoa(int n)
{
	int		size;
	int		symbol;
	char	*str;
	int		sz_i;

	sz_i = 1;
	size = 1;
	symbol = 0;
	if (n == -2147483648)
		return (ft_min_int());
	if (n < 0)
	{
		symbol = 1;
		n = -n;
	}
	ft_check_size(&size, &sz_i, n);
	if (!(str = ft_strnew(sz_i + symbol)))
		return (NULL);
	if (symbol == 1)
	{
		*str = '-';
		str++;
	}
	ft_load_itoa(str, n, size);
	return (str - symbol);
}
