/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ll_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 21:53:48 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/30 22:01:58 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ll_size(long long int nb)
{
    int     i;

    i = 1;
    while (nb /= 10)
        i++;
    return (i);
}