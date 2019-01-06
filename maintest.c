/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 20:58:09 by mgessa            #+#    #+#             */
/*   Updated: 2019/01/07 00:20:40 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "unistd.h"
#include <limits.h>


#define SUCCESS "\x1b[32m  ▒ ▒ ▒ Success! ▒ ▒ ▒ \x1b[0m\n\n"

#define FAILURE "\x1b[31m  ▒ ▒ ▒ Failure! ▒ ▒ ▒ \x1b[0m\n"

static void		print_result(int nb1, int nb2)
{
	if (nb1 == nb2)
		printf("%s", SUCCESS);
	else
	{
		printf("%s", FAILURE);
		printf("printf:    %d\n", nb1);
		printf("ft_printf: %d\n\n", nb2);
	}
}

static void		ft_print_limit()
{
	    printf("CHAR_BIT   = %d\n", CHAR_BIT);
    printf("MB_LEN_MAX = %d\n", MB_LEN_MAX);
    printf("\n");
 
    printf("CHAR_MIN   = %+d\n", CHAR_MIN);
    printf("CHAR_MAX   = %+d\n", CHAR_MAX);
    printf("SCHAR_MIN  = %+d\n", SCHAR_MIN);
    printf("SCHAR_MAX  = %+d\n", SCHAR_MAX);
    printf("UCHAR_MAX  = %u\n",  UCHAR_MAX);
    printf("\n");
 
    printf("SHRT_MIN   = %+d\n", SHRT_MIN);
    printf("SHRT_MAX   = %+d\n", SHRT_MAX);
    printf("USHRT_MAX  = %u\n",  USHRT_MAX);
    printf("\n");
 
    printf("INT_MIN    = %+d\n", INT_MIN);
    printf("INT_MAX    = %+d\n", INT_MAX);
    printf("UINT_MAX   = %u\n",  UINT_MAX);
    printf("\n");
 
    printf("LONG_MIN   = %+ld\n", LONG_MIN);
    printf("LONG_MAX   = %+ld\n", LONG_MAX);
    printf("ULONG_MAX  = %lu\n",  ULONG_MAX);
    printf("\n");
 
    printf("LLONG_MIN  = %+lld\n", LLONG_MIN);
    printf("LLONG_MAX  = %+lld\n", LLONG_MAX);
    printf("ULLONG_MAX = %llu\n",  ULLONG_MAX);
    printf("\n");
}

int		main()
{
	int nb1;
	int nb2;

	ft_print_limit();
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

	char	t1[] = "Result : %.3d\n";
	nb1 = printf(t1, 250);
	nb2 = ft_printf(t1, 250);


////

	char	t2[] = "Result : %d\n";
	nb1 = printf(t2, 250);
	nb2 = ft_printf(t2, 250);
	print_result(nb1, nb2);

///


	char	t3[] = "Result : %10d\n";
	nb1 = printf(t3, 250);
	nb2 = ft_printf(t3, 250);
	print_result(nb1, nb2);

///

	char	t4[] = "Result : %10 .5d\n";
	nb1 = printf(t4, 250);
	nb2 = ft_printf(t4, 250);
	print_result(nb1, nb2);

///

	char	t5[] = "Result : % .-3d\n";
	nb1 = printf(t5, 250);
	nb2 = ft_printf(t5, 250);
	print_result(nb1, nb2);

///

	char	t6[] = "Result : %2 .-3d\n";
	nb1 = printf(t6, 250);
	nb2 = ft_printf(t6, 250);
	print_result(nb1, nb2);

///

	char	t7[] = "Result : %2-10d\n";
	nb1 = printf(t7, 250);
	nb2 = ft_printf(t7, 250);
	print_result(nb1, nb2);


///

	char	t8[] = "Result : %10 0d\n";
	nb1 = printf(t8, 255);
	nb2 = ft_printf(t8, 255);
	print_result(nb1, nb2);

///

	char	t9[] = "Result : %-10 0d\n";
	nb1 = printf(t9, 250);
	nb2 = ft_printf(t9, 250);
	print_result(nb1, nb2);

//

	char	t10[] = "Result : %10.-3d\n";
	nb1 = printf(t10, 250);
	nb2 = ft_printf(t10, 250);
	print_result(nb1, nb2);

//

	char	t11[] = "Result : %.3 d\n";
	nb1 = printf(t11, 250);
	nb2 = ft_printf(t11, 250);
	print_result(nb1, nb2);

//

	char	t12[] = "Result : % d\n";
	nb1 = printf(t12, 250);
	nb2 = ft_printf(t12, 250);
	print_result(nb1, nb2);

//

	char	t13[] = "Result : %-d\n";
	nb1 = printf(t13, 250);
	nb2 = ft_printf(t13, 250);
	print_result(nb1, nb2);


//


	char	t14[] = "Result : %10-d\n";
	nb1 = printf(t14, 250);
	nb2 = ft_printf(t14, 250);
	print_result(nb1, nb2);

//

	char	t15[] = "Result : %10.4-d\n";
	nb1 = printf(t15, 250);
	nb2 = ft_printf(t15, 250);
	print_result(nb1, nb2);

//

	char	t16[] = "Result :%10.4+-d Hello\n";
	nb1 = printf(t16, 250);
	nb2 = ft_printf(t16, 250);
	print_result(nb1, nb2);


//

	char	t17[] = "Result :%10.4+-d Hello\n";
	nb1 = printf(t17, -42);
	nb2 = ft_printf(t17, -42);
	print_result(nb1, nb2);

//

	char	t18[] = "Result :%10.4+-d Hello\n";
	nb1 = printf(t18, -0);
	nb2 = ft_printf(t18, -0);
	print_result(nb1, nb2);
//

	char	t19[] = "Result : %d %d %d %d\n";
	nb1 = printf(t19, -1, -2, 33, 42);
	nb2 = ft_printf(t19, -1, -2, 33, 42);
	print_result(nb1, nb2);

//

	char	t20[] = "%+6.4 d\n";
	nb1 = printf(t20, 42);
	nb2 = ft_printf(t20, 42);
	print_result(nb1, nb2);
//

	char	t21[] = "%+6.4 d\n";
	nb1 = printf(t21, 0);
	nb2 = ft_printf(t21, 0);
	print_result(nb1, nb2);

//


	char	t22[] = "%d\n";
	nb1 = printf(t22, 0);
	nb2 = ft_printf(t22, 0);
	print_result(nb1, nb2);

//

	char	t23[] = "%0+5d\n";
	nb1 = printf(t23, 42);
	nb2 = ft_printf(t23, 42);
	print_result(nb1, nb2);

//

	char	t24[] = "%03.2d\n";
	nb1 = printf(t24, 0);
	nb2 = ft_printf(t24, 0);
	print_result(nb1, nb2);

//

	char	t25[] = "%03.2d\n";
	nb1 = printf(t25, 1);
	nb2 = ft_printf(t25, 1);
	print_result(nb1, nb2);

	char	t26[] = "%02.2d\n";
	nb1 = printf(t26, 1);
	nb2 = ft_printf(t26, 1);
	print_result(nb1, nb2);

//

	char	t27[] = "%05 .4d\n";
	nb1 = printf(t27, 1);
	nb2 = ft_printf(t27, 1);
	print_result(nb1, nb2);


//

	char	t28[] = "%.d %.1dn\n";
	nb1 = printf(t28, 0, 0);
	nb2 = ft_printf(t28, 0, 0);
	print_result(nb1, nb2);

//

	char	t29[] = "%d\n";
	nb1 = printf(t29, 0);
	nb2 = ft_printf(t29, 0);
	print_result(nb1, nb2);


	char	td[] = "%#d\n";
	nb1 = printf(td, 10);
	nb2 = ft_printf(td, 10);
	print_result(nb1, nb2);
	//


	char	t30[] = "%.s\n";
	nb1 = printf(t30, "test");
	nb2 = ft_printf(t30, "test");
	print_result(nb1, nb2);

//

	char	t31[] = "'%5.d %5.0d'\n";
	nb1 = printf(t31, 0, 0);
	nb2 = ft_printf(t31, 0, 0);
	print_result(nb1, nb2);


	char	t32[] = "'%o'\n";
	nb1 = printf(t32, 0, 0);
	nb2 = ft_printf(t32, 0, 0);
	print_result(nb1, nb2);

	char	t33[] = "'%+10 .4o'\n";
	nb1 = printf(t33, 0, 0);
	nb2 = ft_printf(t33, 0, 0);
	print_result(nb1, nb2);

	char	t34[] = "'%+10 .0o'\n";
	nb1 = printf(t34, 0, 0);
	nb2 = ft_printf(t34, 0, 0);
	print_result(nb1, nb2);


	char	t35[] = "'%+10-.0o'\n";
	nb1 = printf(t35, 2555, 0);
	nb2 = ft_printf(t35, 2555, 0);
	print_result(nb1, nb2);

	char	t36[] = "'%+10-0.10o'\n";
	nb1 = printf(t36, 2555, 0);
	nb2 = ft_printf(t36, 2555, 0);
	print_result(nb1, nb2);


	char	t37[] = "Test fail: '%+10{-0.10o'\n";
	nb1 = printf(t37, 2555, 0);
	nb2 = ft_printf(t37, 2555, 0);
	print_result(nb1, nb2);

	char	t38[] = "Test fail: '%#o'\n";
	nb1 = printf(t38, 2555, 0);
	nb2 = ft_printf(t38, 2555, 0);
	print_result(nb1, nb2);

	char	t39[] = "Test fail: '%#.4o'\n";
	nb1 = printf(t39, 2555, 0);
	nb2 = ft_printf(t39, 2555, 0);
	print_result(nb1, nb2);

	char	t40[] = "Test fail: '%#.1o'\n";
	nb1 = printf(t40, 0, 0);
	nb2 = ft_printf(t40, 0, 0);
	print_result(nb1, nb2);

	char	t41[] = "Test fail: '%#.0o'\n";
	nb1 = printf(t41, 0, 0);
	nb2 = ft_printf(t41, 0, 0);
	print_result(nb1, nb2);


	char	t42[] = "Test fail: '%#o'\n";
	nb1 = printf(t42, 5, 0);
	nb2 = ft_printf(t42, 5, 0);
	print_result(nb1, nb2);

	char	t43[] = "Test fail: '%10.4#o'\n";
	nb1 = printf(t43, 50000, 0);
	nb2 = ft_printf(t43, 50000, 0);
	print_result(nb1, nb2);

		char	t44[] = "Test fail: '%4.8ll#0o'\n";
	nb1 = printf(t44, 50000, 0);
	nb2 = ft_printf(t44, 50000, 0);
	print_result(nb1, nb2);

			char	t501[] = "Test big: %+llo\n";
	nb1 = printf(t501, 9223372036854775807);
	nb2 = ft_printf(t501, 9223372036854775807);
	print_result(nb1, nb2);

	char	t45[] = "Test big: %+llo\n";
	nb1 = printf(t45, 9223372036854700);
	nb2 = ft_printf(t45, 9223372036854700);
	print_result(nb1, nb2);


		char	t46[] = "Test big: %+llo\n";
	nb1 = printf(t46, 9223372036854775807);
	nb2 = ft_printf(t46, 9223372036854775807);
	print_result(nb1, nb2);


		char	t47[] = "Test big: %+o\n";
	nb1 = printf(t47, 4294967295);
	nb2 = ft_printf(t47, 4294967295);
	print_result(nb1, nb2);

	char	t48[] = "Test big: %+u\n";
	nb1 = printf(t48, 4294967295);
	nb2 = ft_printf(t48, 4294967295);
	print_result(nb1, nb2);


		char	t49[] = "Test big: %#u\n";
	nb1 = printf(t49, 4294967295);
	nb2 = ft_printf(t49, 4294967295);
	print_result(nb1, nb2);

			char	t50[] = "Test big: % u\n";
	nb1 = printf(t50, 4294967295);
	nb2 = ft_printf(t50, 4294967295);
	print_result(nb1, nb2);


				char	t51[] = "Test big: % #u\n";
	nb1 = printf(t51, 0);
	nb2 = ft_printf(t51, 0);
	print_result(nb1, nb2);

					char	t52[] = "Test big: % #u\n";
	nb1 = printf(t52, 0);
	nb2 = ft_printf(t52, 0);
	print_result(nb1, nb2);

	char	t53[] = "Test big: % .#u\n";
	nb1 = printf(t53, 0);
	nb2 = ft_printf(t53, 0);
	print_result(nb1, nb2);

	char	t54[] = "%o, %ho, %hho\n";
	nb1 = printf(t54, -42, -42, -42);
	nb2 = ft_printf(t54, -42, -42, -42);
	print_result(nb1, nb2);

	char	t55[] = "%x, %hx, %hhx\n";
	nb1 = printf(t55, -42, -42, -42);
	nb2 = ft_printf(t55, -42, -42, -42);
	print_result(nb1, nb2);

	char	t56[] = "%x, %hx, %hhx\n";
	nb1 = printf(t56, 42, 42, 42);
	nb2 = ft_printf(t56, 42, 42, 42);
	print_result(nb1, nb2);


		char	t57[] = "%#x, %#hx, %#hhx\n";
	nb1 = printf(t57, 42, 42, 42);
	nb2 = ft_printf(t57, 42, 42, 42);
	print_result(nb1, nb2);


	char		t58[] = "@moulitest: %#.x %#.0x\n";
	nb1 = printf(t58, 0, 0);
	nb2= ft_printf(t58, 0, 0);
	print_result(nb1, nb2);


		char		t59[] = "%#08x\n";
	nb1 = printf(t59, 42);
	nb2= ft_printf(t59, 42);
	print_result(nb1, nb2);

	char		t60[] = "%#X\n";
	nb1 = printf(t60, 42);
	nb2= ft_printf(t60, 42);
	print_result(nb1, nb2);

		char		t61[] = "@moulitest: %#.o %#.0o\n";
	nb1 = printf(t61, 0, 0);
	nb2= ft_printf(t61, 0, 0);
	print_result(nb1, nb2);

	char		t62[] = "%#8x\n";
		nb1 = printf(t62, 42);
	nb2= ft_printf(t62, 42);
	print_result(nb1, nb2);

		char		t63[] = "%#8x\n";
		nb1 = printf(t63, 42);
	nb2= ft_printf(t63, 42);
	print_result(nb1, nb2);

	char		t64[] = "%#08x\n";
	nb1 = printf(t64, 42);
	nb2= ft_printf(t64, 42);
	print_result(nb1, nb2);

		char		t65[] = "%lu\n";
	nb1 = printf(t65, -42);
	nb2= ft_printf(t65, -42);
	print_result(nb1, nb2);


	char		t66[] = "%p %p\n";
	nb1 = printf(t66, t65, t66);
	nb2 = ft_printf(t66, t65, t66);
	print_result(nb1, nb2);

	char		t67[] = "%.2p %.20p\n";
	nb1 = printf(t67, t65, t66);
	nb2 = ft_printf(t67, t65, t66);
	print_result(nb1, nb2);

	char		t68[] = "%15.p %025.p\n";
	nb1 = printf(t68, t65, t66);
	nb2 = ft_printf(t68, t65, t66);
	print_result(nb1, nb2);

	char		t69[] = "%20.10p %025.20p\n";
	nb1 = printf(t69, t65, t66);
	nb2 = ft_printf(t69, t65, t66);
	print_result(nb1, nb2);

	char		t70[] = "%20.13p %025.14p\n";
	nb1 = printf(t70, t65, t66);
	nb2 = ft_printf(t70, t65, t66);
	print_result(nb1, nb2);

	char		t71[] = "'%lu', '%lu'\n";
	nb1 = printf(t71, 0, ULONG_MAX);
	nb2 = ft_printf(t71, 0, ULONG_MAX);
	print_result(nb1, nb2);

	char		t72[] = "%.0p, %.p\n";
	nb1 = printf(t72, 0, 0);
	nb2 = ft_printf(t72, 0, 0);
	print_result(nb1, nb2);

	char		t73[] = "'%lu', '%llu'\n";
	nb1 = printf(t73, ULONG_MAX, ULLONG_MAX);
	nb2 = ft_printf(t73, ULONG_MAX, ULLONG_MAX);
	print_result(nb1, nb2);

	char		t74[] = "%s %.s\n";
	nb1 = printf(t74, NULL, NULL);
	nb2 = ft_printf(t74, NULL, NULL);
	print_result(nb1, nb2);

	char		t75[] = "%.0p, %.10p\n";
	nb1 = printf(t75, 0, 0);
	nb2 = ft_printf(t75, 0, 0);
	print_result(nb1, nb2);

	char		t76[] = "Complex test: %lu %.lu %ll20-un %llu %ll20.u %.10 010-u %.3 3u\n";
	nb1 = printf(t76, 0, 0, 0, LONG_MIN, LLONG_MAX, 42, 0);
	nb2 = ft_printf(t76, 0, 0, 0, LONG_MIN, LLONG_MAX, 42, 0);
	print_result(nb1, nb2);

	char		t77[] = "Pointer: %p %.0p %.40p %10 0-p %-50p %.1p %15 0p\n";
	nb1 = printf(t77, 0, 0, 0, t77, t75, 0, t1);
	nb2 = ft_printf(t77, 0, 0, 0, t77, t75, 0, t1);
	print_result(nb1, nb2);
	
	char		t78[] = "String: %s %.0s %.40s %10 0-s %-50s %.1s %15 0s\n";
	nb1 = printf(t78, NULL, NULL, "salut!", "grrrr!", "a", "moe");
	nb2 = ft_printf(t78, NULL, NULL, "salut!", "grrrr!", "a", "moe");
	print_result(nb1, nb2);

	char		t79[] = "Int: %d %.0i %.40i %10 0-i %-50d %.1i %15 0i\n";
	nb1 = printf(t79, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	nb2 = ft_printf(t79, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	print_result(nb1, nb2);

	char		t80[] = "Int_min: %d %.0i %.40i %10 0-i %-50d %.1i %15 0i\n";
	nb1 = printf(t80, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	nb2 = ft_printf(t80, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	print_result(nb1, nb2);

	char		t81[] = "Llong_min: %lld %.0lli %.40lli %10 0-lli %-50lld %.1lli %15 0lli\n";
	nb1 = printf(t81, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
	nb2 = ft_printf(t81, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
	print_result(nb1, nb2);

	char		t82[] = "Llong_min: %llu %.0llu %.40llu %10 0-llu %-50llu %.1llu %15 0llu\n";
	nb1 = printf(t82, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
	nb2 = ft_printf(t82, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
	print_result(nb1, nb2);

}