/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 20:58:09 by mgessa            #+#    #+#             */
/*   Updated: 2018/12/25 04:31:01 by mgessa           ###   ########.fr       */
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
/*	printf("%10{s\n", "Test hello");
	ft_printf("%10{s\n", "Test hello");
	//ft_printf("");
	printf("%10.5s Hello\n", "Test hello");
	ft_printf("%10.5s Hello\n", "Test hello");

	printf("%4.7s Hello\n", "Test hello");
	ft_printf("%4.7s Hello\n", "Test hello"); */

//	printf("%20.-7 0s Hello\n", "Test hello123");
//	ft_printf("%20.-7 0s Hello\n", "Test hello123");

/*	printf("%ssa Hello\n", "Test hello");
	ft_printf("%ssa Hello\n", "Test hello");

	printf("%%\n", "Test hello");
	ft_printf("%%\n", "Test hello");

	printf("%20 0%\n", "Test hello");
	ft_printf("%20 0%\n", "Test hello"); */

//	printf("%05%\n"); 
//	ft_printf("%05%\n"); 

//	printf("%.-50s\n", "Test hello");
//	ft_printf("%.-50s\n", "Test hello");

//	printf("%.100-50s\n%s\n", "Hello Marco", "Test123");
//	ft_printf("%.100-50s\n%s\n", "Hello Marco", "Test123");

	printf("o-o-o int test o-o-o\n\n");

	printf("Result :%.3d\n", 25);
	ft_printf("Result :%.3d\n\n", 25);

	printf("Result :%d\n", 25);
	ft_printf("Result :%d\n\n", 25);

	printf("Result :%10d\n", 25);
	ft_printf("Result :%10d\n\n", 25);

	printf("Result :%10 .5d\n", 25);
	ft_printf("Result :%10 .5d\n\n", 25);

	printf("Result :%10 .-3d\n", 25);
	ft_printf("Result :%10 .-3d\n\n", 25);

	printf("Result :%2 .-3d\n", 25);
	ft_printf("Result :%2 .-3d\n\n", 25);

	printf("Result :%-10d\n", 25);
	ft_printf("Result :%-10d\n\n", 25);

	printf("Result :%10 0d\n", 25);
	ft_printf("Result :%10 0d\n\n", 25);

	printf("Result :%-10 0d\n", 500000000);
	ft_printf("Result :%-10 0d\n\n", 500000000);

	printf("Result :%10.-3d Hello\n", 25);
	ft_printf("Result :%10.-3d Hello\n\n", 25);

	printf("Result :%.3 d Hello\n", 25);
	ft_printf("Result :%.3 d Hello\n\n", 25);

	printf("Result :% d Hello\n", 25);
	ft_printf("Result :% d Hello\n\n", 25);

/*

	printf("o-o-o char test o-o-o\n\n");

	printf("Result :%10.-3hhd Hello\n", 250);
	ft_printf("Result :%10.-3hhd Hello\n\n", 250);

	printf("Result :%10.-3hhd Hello\n", 'a');
	ft_printf("Result :%10.-3hhd Hello\n\n", 'a');

	printf("Result :%10.-3hhd Hello\n", 1000);
	ft_printf("Result :%10.-3hhd Hello\n\n", 1000);

	printf("Result :%10.-3hhd Hello\n", 0);
	ft_printf("Result :%10.-3hhd Hello\n\n", 0);

	printf("o-o-o short int test o-o-o\n\n");

	printf("Result :%10.-3hd Hello\n", 1000);
	ft_printf("Result :%10.-3hd Hello\n\n", 1000);

	printf("Result :%10.-3hd Hello\n", 123456789);
	ft_printf("Result :%10.-3hd Hello\n\n", 123456789);

	printf("Result :%10.-3hd Hello\n", -123456789);
	ft_printf("Result :%10.-3hd Hello\n\n", -123456789);

	printf("Result :%10.-3hd Hello\n", 0);
	ft_printf("Result :%10.-3hd Hello\n\n", 0);

	printf("Result :%10.-3hd Hello\n", 1);
	ft_printf("Result :%10.-3hd Hello\n\n", 1);

	printf("o-o-o long int test o-o-o\n\n");

	printf("Result :%10.-3ld Hello\n", 1000);
	ft_printf("Result :%10.-3ld Hello\n\n", 1000);

	printf("Result :%10.-3ld Hello\n", 123456789123);
	ft_printf("Result :%10.-3ld Hello\n\n", 123456789123);

	printf("Result :%10.-3ld Hello\n", 12345678912345678912);
	ft_printf("Result :%10.-3ld Hello\n\n", 12345678912345678912);

	printf("o-o-o long long int test o-o-o\n\n");

	printf("Result :%10.-3lld Hello\n", 12345678912345678);
	ft_printf("Result :%10.-3lld Hello\n\n", 12345678912345678);


	printf("Result :%10.-3lld Hello\n", -9223372036854775808);
	ft_printf("Result :%10.-3lld Hello\n\n", -9223372036854775808);

	printf("Result :%10.-3lld Hello\n", 9223372036854775807);
	ft_printf("Result :%10.-3lld Hello\n\n", 9223372036854775807);

	printf("Result :%10.-3d Hello\n", 9223372036854775807);
	ft_printf("Result :%10.-3d Hello\n\n", 9223372036854775807);  */

//	printf("Result :%10 .5f\n", 25);
}