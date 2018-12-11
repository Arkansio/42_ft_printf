/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 20:58:09 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/11 00:23:51 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main()
{
	printf("%20.8d\n", 25);
	printf("%20.8d\n", 252);
	printf("%20.8d\n", 2511);
	printf("%10.8d\n", 2511);
	printf("%10.8d\n", 21);
	printf("%.5d\n", 21);
	printf("%.5d\n", 212);
	printf("%+.5d\n", 212);
	printf("%10d\n", 212);
	printf("%+-+++10d\n", 212);
	printf("%+-+++10hd\n", 270);
	printf("%+++++---10.5hd Hello\n", 212);
	printf("HEllo %-+hh+1.8 0d Hello\n", 2500000);
	ft_printf("Hello my name is %s\n", "François");
}