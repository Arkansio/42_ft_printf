/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 21:19:48 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/09 02:37:44 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include "libft.h"

typedef struct		s_args
{
	int		flags;
}					t_args;

int		ft_printf(const char *format, ...);

#endif