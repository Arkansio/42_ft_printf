/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <mgessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 20:58:09 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/17 23:07:08 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "unistd.h"
int		main()
{
/*	printf("%20.8d\n", 25);
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
	printf("\n\nsay: %.2s\n\n", "hello"); */
	
//	ft_printf("Hello my name is %.         .s\n", "François");
//	printf("Hello my name is %s\n  %   s", "François", "Gerard");
//	printf("%+50.20d\n", 200);
//	printf("Hello%}Marco !\n");
//	printf("Hello%.5hhh}sMarco !\n", "test");
//a	ft_printf("%s", "Marco\n");
//	ft_printf("", "Marco\n");
//	ft_printf("Hello %.50s", "Marco\n");
//	printf("Modulo print is: %.%\n", "Marco\n");
//	ft_printf("Modulo print is: %.%\n", "Marco\n");
	printf("%10{s\n", "Test hello");
	ft_printf("%10{s\n", "Test hello");
	//ft_printf("");
	printf("%10.5s Hello\n", "Test hello");
	ft_printf("%10.5s Hello\n", "Test hello");

	printf("%4.7s Hello\n", "Test hello");
	ft_printf("%4.7s Hello\n", "Test hello");

	char tab[10];
	tab[0] = 'a';
	tab[1] = 'b';
	tab[2] = 2;
	tab[3] = 'c';
	printf("%.7 20s Hello\n%0%\n", tab);
	ft_printf("%.7 20s Hello\n%0%\n", tab);

	printf("\n");

	printf("%4.7c Hello\n", 'a');
	ft_printf("%4.7c Hello\n", 'a');
}