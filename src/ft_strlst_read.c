/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlst_read.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:48:21 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/13 23:31:55 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void        ft_strlst_read(t_list **alst)
{
    t_list *tmp;

    printf("hey");
    if (!alst)
        return ;
    printf("hey\n");
    tmp = alst[0];
    while (tmp)
    {
        printf("%s", (char*)tmp->content);
        tmp = tmp->next;
    }
}