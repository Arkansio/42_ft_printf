/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_properties.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 20:39:16 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/16 23:07:29 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static void		ft_readflags(t_list **alst)
{
    t_list *tmp;

    if (!alst)
        return ;
    tmp = alst[0];
    while (tmp)
    {
//        printf("%d -> ", *(enum e_flags*)tmp->content);
        tmp = tmp->next;
    }
}

void        ft_parse_properties(t_proper *proper, const char *str, int max)
{
    proper->flags = NULL;
    proper->precision = get_precision(str, max);
    proper->min_w = get_min_width(str, max);
    ft_parse_flags(&proper->flags, str, max);

    ft_readflags(&proper->flags);
}