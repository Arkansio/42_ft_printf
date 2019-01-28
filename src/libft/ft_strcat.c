/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:58:55 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/12 02:11:08 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		pos_src;

	i = 0;
	while (dest[i] != '\0')
		i++;
	pos_src = 0;
	while (src[pos_src])
	{
		dest[i] = src[pos_src];
		pos_src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
