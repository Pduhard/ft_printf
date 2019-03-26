/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pduhard- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/24 19:31:40 by pduhard-     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/26 15:16:38 by pduhard-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <wchar.h>
#include <float.h>
#include <fcntl.h>

//int			main(void)
//

void	test_unsigned(char *str)
{
//	printf("vrai : %u\n" ,-1001234);
	ft_printf("mien : %u\n", -1001234);
//	printf("vrai : %llu\n" ,(unsigned long long)-12345612220);
	ft_printf("mien : %llu\n", (unsigned long long)-12345612220);
//	printf("vrai : %05.1u %3.4hu %-4.7U\n", 45, (unsigned short)-1789, 147);
	ft_printf("mien : %05.1u %3.4hu %-4.7U\n", 45, (unsigned short)-1789, 147);
}

void	test_signed(char *str)
{
	int i = 12986;
	signed char j = -124;
	short k = -189;
	long l = -48968;
	long long m = -15984651894;
	intmax_t n = -1111111111;

//	printf("vrai printf : int : %d\nsigned char %hhd\nshort %hd\nlong	%ld\nlong long %lld\nintmax_t %jd\n", i, j, k, l, m, n);
	ft_printf("ft_printf : int : %d\nsigned char %hhd\nshort %hd\nlong	%ld\nlong long %lld\nintmax_t %jd\n", i, j, k, l, m, n);
	//printf("vrai printf : int : %+'d\nsigned char %'.12hhd\nshort %'.2hd\nlong	% '.2ld\nlong long %'lld\nintmax_t %'jd\n", i, j, k, l, m, n);
	ft_printf("ft_printf : int : %+d\nsigned char %.12hhd\nshort %.2hd\nlong	% .2ld\nlong long %lld\nintmax_t %jd\n", i, j, k, l, m, n);
//	int po = printf("%ld\n", -9223372036854775807 - 1);
//	printf("ll : |%+5.4d|\n", 42);
	ft_printf("ll : |%+5.4d|\n", 42);
//	printf("ll : |%lld|\n", (long long)-4278900);
	ft_printf("ll : |%lld|\n", (long long)-4278900);
	ft_printf("ft_printf int min : %ld\n", -9223372036854775807 - 1);
//	printf("test : f(%% 20.12ld et %% 05D%% 4.8hi !)\n");
//	printf("ur : % 20.12ld et % 05D% 4.8hi !\n", 0x11ffaa147, 24, (short)-2345);
	ft_printf("my : % 20.12ld et % 05D% 4.8hi !\n", 0x11ffaa147, 24, (short)-2345);
//	printf("le O (ur): % d\n", 0);
	ft_printf("le O (my): %d\n", 0);
	printf("le + (ur): %'12.5d et yolo %-25.2ld\n", 141230, (long)0);
	ft_printf("le + (ur): %'12.5d et yolo %-25.2ld\n", 141230, (long)0);
	ft_printf("le + (my): %'12.5d\n", 141230);
	printf("le + (ur): %'12.5d\n", 1401230);
	ft_printf("le + (my): %'12.5d\n", 1401230);
	printf("le + (ur): %'12.5d\n", 14123012);
	ft_printf("le + (my): %'12.5d\n", 14123012);
	printf("le + (ur): %'12.5d\n", 14);
	ft_printf("le + (my): %'12.5d\n", 14);
//	printf("le +0 (ur): %00+10.4d\n", 0);
	ft_printf("le +0 (my): %00+10.4d\n", 0);
//	printf("le fameux 0 (ur): toto%.0d et %+.i et  %   .0D !!!\n",0,0,0);
	ft_printf("le fameux 0 (my): toto%.0d et %+.i et  %   .0D !!!\n",0,0,0);
//	printf("le putain de 0 (ur): %04d\n", 0);
	ft_printf("le putain de 0 (my): %04d\n", 0);
//	printf("test tim (ur): % d\n", -4500);
	ft_printf("test tim (my): % d\n", -4500);
//	printf("bonus (ur): %05.2d\n", 0);
	ft_printf("bonus (my): %05.2d\n", 0);
	ft_printf("m :%0+5d\n", -42);
//	printf("y :%0+5d\n", -42);
	ft_printf("m :%0+5d\n", 42);
//	printf("y :%0+5d\n", 42);
//	printf("%G", (double)456196.15);

}

void	test_octal(char *str)
{
//	printf("(ur): %o\n", 1475);
	ft_printf("(my): %o\n", 1475);
//	printf("o (ur): %.o\n", 0);
	ft_printf("o (my): %.o\n", 0);
//	printf("(ur) : %o\n", -123654789);
	ft_printf("(my) : %o\n", -123654789);
//	printf("test : coco et %%-#-#--24O titi%%#012o\n");
//	printf("(ur) : coco et %-#-#--24O titi%#012o\n", 12, -874);
	ft_printf("(my) : coco et %-#-#--24O titi%#012o\n", 12, -874);
//	printf("(ur) : coco et %#24O\n", 12);
	ft_printf("(my) : coco et %#24O\n", 12);
//	printf("(ur) : titi%#012o\n", -874);
	ft_printf("(my) : titi%#012o\n", -874);
//	printf("(ur)(wtf) : toto %#oet %#.o et %#.1o !\n", 0, 0, 0);
	ft_printf("(my)(wtf) : toto %#oet %#.o et %#.1o !\n", 0, 0, 0);
	//printf("(ur)(wtf) : toto %#xet %#.X et %#.1x !\n", 0, 0, 0);
	//ft_printf("(my)(wtf) : toto %#xet %#.X et %#.1x !\n", 0, 0, 0);
	ft_printf("my : %+05o\n", 2500);
//	printf("ry : %+5o\n", 2500);
//	printf("ur : %-05o\n", 2500);
	ft_printf("mie %+5o", 42);
	//printf("vri %+5o", 42);
//	printf("%0+5d", 42);
	ft_printf("mmoulitest: %.o %.0o", 0, 0);
//	printf("@moulitest: %.o %.0o", 0, 0);

}

void	test_hex(char *str)
{
//	printf("vrai : %#X\n", 0xff7744);
	ft_printf("mien : %#X\n", 0xff7744);
//	printf("vrai : %#x\n", 0xff7744);
	ft_printf("mien : %#x\n", 0xff7744);
//	printf("vrai : %.x\n", 12);
	ft_printf("mien : %.x\n", 12);
//	printf("vrai : toto %0##0.4X%#4.2xet c'est fini \n", 0x037a, 0x9e);
	ft_printf("mien : toto %0##0.4X%#4.2xet c'est fini \n", 0x037a, 0x9e);
//	printf("vrai : cc%#.4X et %#0012x %#04hX !!\n", 0xaef, 0xe, (unsigned short)0);
	ft_printf("mien : cc%#.4X et %#0012x %#04hX !!\n", 0xaef, 0xe, (unsigned short)0);
	//printf("(ur) : %0-#10.0x\n", 0);
	//ft_printf("(my) : %0-#10.0x\n", 0);
//	printf("vrai : %#-8x\n", 42);
	ft_printf("mien : %#-8x\n", 42);
	ft_printf("mien : %d %d %x");  //   undefine behavior
//	printf("mien : %d %d %x");
//	printf("vrai : %#-08x\n", 42);
	ft_printf("mien : %#-08x\n", 42);

//	printf("leur %----24p et hello %2p %12p", str, &str, NULL);
	ft_printf("mien %----24p et hello %2p %12p", str, &str, NULL);
}

void	test_char(char *str)
{
	//printf("%04c", 'l');
	//printf("%017%\n");
//	printf("vrai : hello ca%----4c %1c va %10c%-c ??\n", '\0', '\n', (char)564, 0);
	ft_printf("mien : hello ca%----4c %1c va %10c%-c ??\n", '\0', '\n', (char)564, 0);
	//	printf("vrai : hello ca%4c %1c va %10c%-c ??\n", '\0', '\n', (char)564, 0);
	ft_printf("mien : hello ca%4c %1c va %10c%-c ??\n", '\0', '\n', (char)564, 0);
//	printf("{%03c}", 0);
	ft_printf("{%03c}", 0);
//	printf("{%05s}", "abc");
	ft_printf("{%05s}", "abc");
//	printf("{%05s}", "abc");
	ft_printf("{%05s}", "abc");
//	printf("{%05p}", 0);
	ft_printf("{%05p}", 0);
}

void	test_unicode(char *str)
{
	//unsigned int c = 0x1234;
	//wchar_t buf = 0x00C5;
	//printf("%d\n", MB_CUR_MAX);
//	printf("%C\n", 1234);
	  ft_printf("%C\n", 1234);
	 // ft_printf("%C\n", buf);
//	  printf("%C\n", buf);
//	printf("ur ez: %C\n", 0x6f);
	ft_printf("my ez: %C\n", 0x6f);

//	printf("ur : %lc\n", 263425);
	ft_printf("my : %C\n", 263425);

//	printf("ur : %lc\n", 0x4e6);
	ft_printf("my : %lc\n", 0x4e6);

//	printf("ur : %C\n", 3250);
	ft_printf("my : %C\n", 3250);

//	printf(" vrai : hehe %d%C\n", 42, 0x11ffff);
	ft_printf("mien : hehe %d%C\n", 42, 0x11ffff);

//	printf("ur : %C\n", 0xd800);
	ft_printf("my : %C\n", 0xd800);

//	printf("ur : %C\n", 0xbffe);
	ft_printf("my : %C\n", 0xbffe);

	//printf("ur : %c\n", (char)254);
//	printf("ur : %lc\n", 254);
	ft_printf("my : %lc\n", 254);

//	printf("ur %C\n",  0xFFFD);
	ft_printf("my %C\n",  0xFFFD);
//	printf("ur %lc\n", 254);
	ft_printf("my %lc\n", 254);
//	printf("ur %C\n", 256);
	ft_printf("my %C\n", 256);

//	printf("vrai |%-5lc|\n", 350);
	ft_printf("mien |%-5lc|\n", 350);
	//ft_printf("my : %C\n", 0xe000);

//	printf("ur : %8C et coco %C titi %lc\n", 3250, 0x11ffff, 'a');
	ft_printf("salut : %d  my : %8C et coco %C titi %lc\n",42, 3250, 0x11ffff, 'a');
	unsigned char c;
	  char buf[2];
	  c = '\xD3';
	  buf[0] = c;
	//write(1, &c, 1);
	c = '\xA6';
	buf[1] = c;
	write(1, buf, 2);
	//buf[2] = c;
	//c = 0xA8;
	//buf[3] = c;

}

void	test_str(void)
{
	//printf("TEST : %s", "coco");
	//ft_printf("MIEN : %s", "coco");
//	int ret = printf("[%S]%S\n", NULL, L"D");
//	int ret2 = ft_printf("[%S]\n", NULL);
	wchar_t	s[4];
//	printf("%d et %d\n", ret, ret2);
	s[0] = 0x53;
	s[1] = 0xd800;
	s[2] = 0x81000;
	s[3] = '\0';
	ft_printf("%d\n", printf("TEST : %S", s));

	s[0] = 0x53;
	s[1] = 0x3abc;
	s[2] = 0x81000;
	s[3] = '\0';
//	printf("vrai : %.7ls\n", s);
	ft_printf("mien : %.7ls\n", s);
	ft_printf("%d\n", printf("TEST : %S", s));
}

void	test_wildard(void)
{
	//printf("%*d\n", -5, 42);
	ft_printf("%*d\n", -5, 42);
	//printf("%*.*d\n", 0, 3, 0);
	ft_printf("%*.*d\n", 0, 3, 0);
	//printf("u %%3*p : {%3.3*p}\n", 10, 0);
	//printf("u %%*05p : {%*05p}\n", 10, 0);
	//printf("u wtf : {%*0ll zj -p}\n", 10, 6, 0);
	//printf("u : {%*3d}\n", 0, 0);
	ft_printf("m : {%*3d}\n", 0, 0);
	ft_printf("m %%3*p : {%3.3*p}\n", 10, 0);
	ft_printf("m %%*05p : {%*05p}\n", 10, 0);
	ft_printf("m wtf : {%*0ll zj -p}\n", 10, 6, 0);
}

void	test_binary(char *str)
{
	ft_printf("bin : %-42.4hhb\n", -1);
	ft_printf("bin : %2.8B\n", atoll(str));
	ft_printf("bin : %2.8lb\n", atoll(str));
}

void	test_float(char *str)
{
	//printf("u {%.12f}{%+F}\n", 1444565444646.6465424242242, 1444565444646.6465024242242);	
	
	ft_printf("i' {%'.12f}{%'+f}\n",1444565444646.6465424242242, 1444565444646.6465024242242);
	ft_printf("i '{%.12f}{%+F}\n", 1444565444646.6465424242242, 1444565444646.6465024242242);
	//printf("u {%f}{%F}\n", -1.42, -1.42);
	ft_printf("i {%.125f}{%F}\n", -1.42, -1.42);
	printf("u {%.125f}{%F}\n", -1.42, -1.42);
	//printf("u {%f}{%F}\n", 0.0, 0.0);
//	printf("yu %f\n", 34028234663852885981170418348451692543.000000);
//	ft_printf("mi %f\n", 34028234663852885981170418348451692543.000000);
	/*printf("yu %f\n", FLT_MAX);
	ft_printf("mi %f\n", FLT_MAX);
	ft_printf("i {%'f}{%'F}\n", 0.0, 0.0);
	ft_printf("i {%f}{%F}\n", 0.0, 0.0);
	//printf("u {%f}{%.4f}\n", -1444565444646.6465424242242454654, 1444565444646.6465224242242454654);
	ft_printf("i {%'f}{%'.4f}\n", -1444565444646.6465424242242454654, 1444565444646.6465224242242454654);
	ft_printf("i {%f}{%.4f}\n", -1444565444646.6465424242242454654, 1444565444646.6465224242242454654);
	//printf("u {%f}{%.4f}\n", -1444565444646.6465424242242454654, 1444565444646.9999224242242454654);
	ft_printf("i {%'f}{%'.4f}\n", -1444565444646.6465424242242454654, 1444565444646.9999224242242454654);
	ft_printf("i {%f}{%.4f}\n", -1444565444646.6465424242242454654, 1444565444646.9999224242242454654);
*/}


void	test_aA(char *str)
{
	printf("u %a\n", 0.056185564);
//	ft_printf("i %e\n", 0.056185564);
	printf("u %a\n", 0.0);
//	ft_printf("i %e\n", 0.0);
	printf("u %.2a\n", 0.0);
//	ft_printf("i %.2e\n", 0.0);
	printf("u %.0a\n", 0.0);
//	ft_printf("i %.0e\n", 0.0);
	printf("u %+025a\n", (double)54231231321);
//	ft_printf("i %+025e\n", (double)54231231321);
	printf("u %+25a\n", (double)54231231321);
//	ft_printf("i %+25e\n", (double)54231231321);
	printf("u %+.2A\n", (double)54231231321);
//	ft_printf("i %+.2E\n", (double)54231231321);
	printf("u %+.2A\n", (double)0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000054231231321);
//	ft_printf("i {MBUMF}%+.2E{E}\n", 12, 241, 90, 0, 0, 0, (double)0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000054231231321);
	printf("u %+A\n", (double)-0.000054231231321);	
}

void	test_eE(char *str)
{
	printf("u %e\n", 0.056185564);
	ft_printf("i %e\n", 0.056185564);
	printf("u %e\n", 0.0);
	ft_printf("i %e\n", 0.0);
	printf("u %.2e\n", 0.0);
	ft_printf("i %.2e\n", 0.0);
	printf("u %.0e\n", 0.0);
	ft_printf("i %.0e\n", 0.0);
	printf("u %+025e\n", (double)54231231321);
	ft_printf("i %+025e\n", (double)54231231321);
	printf("u %+25e\n", (double)54231231321);
	ft_printf("i %+25e\n", (double)54231231321);
	printf("u %+.2E\n", (double)54231231321);
	ft_printf("i %+.2E\n", (double)54231231321);
	printf("u %+.2E\n", (double)0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000054231231321);
	ft_printf("i {MBUMF}%+.2E{E}\n", 12, 241, 90, 0, 0, 0, (double)0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000054231231321);
	printf("u %+E\n", (double)-0.000054231231321);
	ft_printf("i %+E\n", (double)-0.000054231231321);
	printf("u %+.12E\n", (double)-0.000054231231321);
	ft_printf("i %+.12E\n", (double)-0.000054231231321);
	printf("u %+E\n", (double)-542312311);
	ft_printf("i %+E\n", (double)-542312311);
	printf("u %E\n", (double)0.542312311);
	ft_printf("i %E\n", (double)0.542312311);
	printf("u %+.1e\n", (double)-5.4231231321);
	ft_printf("i %+.1e\n", (double)-5.4231231321);
	printf("u %+.5e\n", -6.6465);
	ft_printf("i %+.5e\n", -6.6465);
	printf("u %+.0e\n", -6.6465);
	ft_printf("i %+.0e\n", -6.6465);
	printf("u %.0e\n", 6.6465);
	ft_printf("i %.0e\n", 6.6465);
	printf("u %+.3e\n", -6.9996);
	ft_printf("i %+.3e\n", -6.9996);
}

void	test_gG(char *str)
{
	printf("u %g\n", 0.056185564);
	ft_printf("i %g\n", 0.056185564);
	printf("u %g\n", 0.0);
	ft_printf("i %g\n", 0.0);
	printf("u %.2g\n", 0.0);
	ft_printf("i %.2g\n", 0.0);
	printf("u %.0g\n", 0.0);
	ft_printf("i %.0g\n", 0.0);
	printf("u %+025g\n", (double)54230001231321);
	ft_printf("i %+025g\n", (double)54230001231321);
	printf("u %+-25g\n", (double)54230001231321);
	ft_printf("i %+-25g\n", (double)54230001231321);
	printf("u %#025g\n", (double)54230001231321);
	ft_printf("i %#025g\n", (double)54230001231321);
	printf("u %.4g\n", (double)5400230001231321);
	ft_printf("i %.4g\n", (double)5400230001231321);
	printf("u %+.2G\n", (double)54231231321);
	ft_printf("i %+.2G\n", (double)54231231321);
	printf("u %+.11G\n", (double)54231231321);
	ft_printf("i %+.11G\n", (double)54231231321);
	printf("u %+.10G\n", (double)54231231321.2);
	ft_printf("i %+.10G\n", (double)54231231321.2);
	printf("u %+G\n", (double)542533);
	ft_printf("i %+G\n", (double)542533);
	printf("u %+G\n", (double)5422533);
	ft_printf("i %+G\n", (double)5422533);
	printf("u %+G\n", (double)542.2533);
	ft_printf("i %+G\n", (double)542.2533);
	printf("u %+G\n", (double)5422.533);
	ft_printf("i %+G\n", (double)5422.533);
	printf("u %+.2G\n", (double)0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000054231231321);
	ft_printf("i {MBUMF}%+.2G{E}\n", 12, 241, 90, 0, 0, 0, (double)0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000054231231321);
	printf("u %+G\n", (double)-0.00054231231321);
	ft_printf("i %+G\n", (double)-0.00054231231321);
	printf("u %+.12G\n", (double)-0.000054231231321);
	ft_printf("i %+.12G\n", (double)-0.000054231231321);
	printf("u %+.12G\n", (double)-0.000050004231231321);
	ft_printf("i %+.12G\n", (double)-0.000050004231231321);
	printf("u %+G\n", (double)-542312311);
	ft_printf("i %+G\n", (double)-542312311);
	printf("u %G\n", (double)0.542312611);
	ft_printf("i %G\n", (double)0.542312611);
	printf("u %+.0g\n", (double)-5.4231231321);
	ft_printf("i %+.0g\n", (double)-5.4231231321);
	printf("u %+.1g\n", (double)-5.4231231321);
	ft_printf("i %+.1g\n", (double)-5.4231231321);
	printf("u %+.5g\n", -6.6465);
	ft_printf("i %+.5g\n", -6.6465);
	printf("u %+.2g\n", -6.6465);
	ft_printf("i %+.2g\n", -6.6465);
	printf("u %+.0g\n", -6.6465);
	ft_printf("i %+.0g\n", -6.6465);
	printf("u %.0g\n", 6.6465);
	ft_printf("i %.0g\n", 6.6465);
	printf("u %.0g\n", 6.0);
	ft_printf("i %.0g\n", 6.0);
	printf("u %#+.3g\n", -6.9996);
	ft_printf("i %#+.3g\n", -6.9996);
}

void	test_n(char *str)
{
	int		j;
	int		j2;
	int		j3;
	int		j4;

	ft_printf("i {%f}{%.4f}%n\n", -1444565444646.6465424242242454654, 1444565444646.9999224242242454654, &j2);
//	printf("u {%f}{%.4f}%n\n", -1444565444646.6465424242242454654, 1444565444646.9999224242242454654, &j);
//	printf("ur j : %d my j : %d\n", j, j2);
	ft_printf("mien : hello ca%----4c %1c va %10c%-c %n??\n", '\0', '\n', (char)564, 0, &j2);
//	printf("vrai : hello ca%----4c %1c va %10c%-c %n??\n", '\0', '\n', (char)564, 0, &j);
//	printf("ur j : %d my j : %d\n", j, j2);
	ft_printf("%n\n", &j2);
//	printf("%n\n", &j);
//	printf("ur j : %d my j : %d\n", j, j2);
//	   printf(" salut gros batard : %S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%hn et salut %ln\n", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"", &j, &j3);
//	printf("ur j : %d et %d\n", j, j3);
	ft_printf(" salut gros batard : %S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%hn et salut %ln\n", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"", &j, &j3);
//	printf("my j : %d et %d\n", j, j3);
}

int		main(int argc, char **argv)
{
	char *t;
	intmax_t	j;
	int		d = 42456;

	setlocale(LC_ALL, "");
	//printf("ur :%.0p, %.p\n", NULL,NULL);
	ft_printf("my :%.0p, %.p\n", NULL, NULL);
	ft_printf("%C\n", 8595);
	//printf("%C\n", 0x1234);
	//test_signed(argv[argc - 1]);
	//test_unsigned(argv[argc - 1]);
	//test_binary(argv[argc - 1]);
	test_float(argv[argc - 1]);
	//test_eE(argv[argc - 1]);
	//test_gG(argv[argc - 1]);
	//test_n(argv[argc - 1]);
	//test_aA(argv[argc - 1]);
//char *test;
/*printf("bonjour %%%% %% %% %%%1.3% % %%#%0+-%0.5%%5%30%%.%-5%%2%%x %%%%coucou%% %%0%%.%%%%5%lld\n", (long long )123565);
printf("%lld\n", (long long)123565);
ft_printf("%lld\n", (long long)123565);
ft_printf("bonjour %%%% %% %% %%%1.3% % %%#%0+-%0.5%%5%30%%.%-5%%2%%x %%%%coucou%% %%0%%.%%%%5%lld\n", (long long)123565);
	//ft_putnbr(ft_getf(&test, "mien : cc%#.4X et %#0012x %#04hX !!\n", 0xaef, 0xe, (unsigned short)0));
	//ft_putnbr(ft_printf("mien : cc%#.4X et %#0012x %#04hX !!\n", 0xaef, 0xe, (unsigned short)0));
	//ft_putnbr(ft_getf(&test, "mien : {UR/}hello ca%----4c %1c{/} va %10c%-c ??\n", '\0', '\n', (char)564, 0));
	//ft_putnbr(asprintf(&test, "mien : hello ca%----4c %1c va %10c%-c ??\n", '\0', '\n', (char)564, 0));
//	ft_putchar('\n');
	//ft_putstr(test);
	//printf("%hhld", 128);




	ft_printf("%hhld", 128);
//printf("toto%.0d et %+.i et  %   .0D !!!\n", 0, 0, 0);	
//ft_printf("toto%.0d et %+.i et  %   .0D !!!\n", 0, 0, 0);	
	//test_octal(argv[argc - 1]);
	//printf("u%0+p|%+p\n", 42, 42)	;
	ft_printf("m% 045.3p|%+0000031.4-p\n", 42, 42)	;
	//printf("%-5+d", 42);
	ft_printf("%-5+d", 42);
	ft_printf("mien : hello ca%----4c %1c va %10c%-c ??\n", '\0', '\n', (char)564, 0);
	ft_printf("%00+10.4d", 0);
	ft_printf("%lhlz", 9223372036854775807);
	//printf("%zu et %zu\n", sizeof(int), sizeof(long));
	test_hex(argv[argc - 1]);
	test_char(argv[argc - 1]);
	test_unicode(argv[argc - 1]);
	//printf("% 10s\n", "salut");
	//t = ft_strnew(5);
//	printf("%\n");
	ft_printf("%");
	ft_printf("%hhd", 128);
	ft_printf("\n");
	ft_printf("% Zoooo\n");
//	printf("% Zoooo\n");
	ft_printf("% Zoooo\n");
	ft_printf("  ME : ntm %#--+0568+%%c%%-##.58%%--+%%%x%%d ntm\n", 5, 456, 12);

	//printf("  ME : ntm %#--+0568+%%c%%-##.58%%--+%%%x%%d ntm\n", 5, 456, 12);

//	printf("%Ld\n", 128);
	//printf("%f\n", 12);
	//printf("u {%+f}{%+F}\n", 1.42, 1.42);
	ft_printf("i {%f}{%F}\n", 1.42, 1.42);



//	printf("u {%5f}{%10.15F}\n", -1.42, -1.42);
//	printf("u {%.0f}{%.1F}\n", -1.42, -1.42);
//	printf("u {%.13f}{%10.4F}\n", -1.42, -1.42);
	//printf("%ld et %ld\n", LONG_MIN, LONG_MAX);
//	printf("%zu et %zu\n", sizeof(long long *), sizeof(signed char*));
//	printf("%ld et %ld\n", LLONG_MIN, LLONG_MAX);
	ft_printf("mi {MF}{B{{{{{{{}{U}{%10f}{E}\n", 12, 45, 78, 42.32);
	int fd = open(argv[argc - 1], O_RDWR);
	//ft_fdprintf(fd, "mi {MF}{B{{{{{{{}{U}{%10f}{E}\n", 12, 45, 78, 42.32);
  //  close(fd);
  	int	test;
	int test2;
//	test[0] = 123156;
//	test[1] = 112;
//	test[2] = 9156;

	//printf("%d, sat %n%n %e\n", 21001455, &test, &test2, (double)0.000000515155152);
	ft_printf("%d et %d\n", test, test2);
   	//  	printf("u {%10f}{%015.35F}\n", 0.142, -0.9999999999999999);
	//printf("u {%f}{%F}\n", (double)-1, (double)-1);
	
	//printf("{%lld}{%D}", 1444565444646.6465424242242, 1444565444646.6465424242242);
	//printf("max : {%LF} min : {%LF} sizeof ldb %zu\n", LDBL_MAX, LDBL_MIN, sizeof(double));
	//test_str();
	//printf("{%10R}");
	ft_printf("{%10R}");
	ft_printf("%d\n", ft_printf("%"));
	ft_printf("%%%woulu\n");
	ft_printf("%%%woulu\n");
	ft_printf("%%%woulu\n");
	ft_printf("%%%woulu\n");
	ft_printf("%%%woulu\n");
	ft_printf("%%%woulu\n");
	ft_printf("%%%woulu\n");
	ft_printf("%%%woulu\n");
	ft_printf("%%%woulu\n");
//	printf("% woula\n");
	
//	printf("%*d\n", -5, 42);
	ft_printf("%*d\n", -5, 42);
//	printf("%*.*d\n", 0, 3, 0);
	ft_printf("%*.*d\n", 0, 3, 0);
//	printf("u %%3*p : {%3.3*p}\n", 10, 0);
//	printf("u %%*05p : {%*05p}\n", 10, 0);
//	printf("u wtf : {%*0ll zj -p}\n", 10, 6, 0);
//	printf("u : {%*3d}\n", 0, 0);
	ft_printf("m : {%*3d}\n", 0, 0);
	ft_printf("m %%3*p : {%3.3*p}\n", 10, 0);
	ft_printf("m %%*05p : {%*05p}\n", 10, 0);
	ft_printf("m wtf : {%*0ll zj -p}\n", 10, 6, 0);
	//printf("%%");
	ft_printf("%");
//	printf("%");
	ft_printf("% Zoooo");
	//printf("% Zoooo");
	ft_printf("%");
//	printf("%");
	//printf("aa%%bb");
	ft_printf("aa%%bb");
	//printf(".%%.%%.%%.%%.%%.%%.%%.%%.");
	ft_printf(".%%.%%.%%.%%.%%.%%.%%.%%.");
	ft_printf("%");
//	printf("% ZOOO");
	//printf("%%%%%%%%%%");
	ft_printf("%%%%%%%%%%");
	ft_printf("{% %}");
	ft_printf("{% %}");
	ft_printf("{% %}");
	ft_printf("{% %}");
//printf("%p\n%x\n%  0 0 0 0  0 0  001.8d\n%-9.5hhd", t,d, d, c);
	//printf(argv[argc - 1], (long long)-545, (long)-150, -45);
	ft_printf(argv[argc - 1], (long long)-545, (long)-150, -45);
	ft_printf("%24.12d", -1144);
	//int i = printf("%24.12d\n", -1144);
	//printf("%d\n", i);
	ft_printf("%S\n", L"G β");
	//printf(" salut : %s%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S", "wtf : |Α α|", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	ft_printf(" salut : %S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	//printf("a%Sb%Sc%S", L"我", buf, L"猫");
	ft_printf("size of ll : %zu s of char * : %zu", sizeof(long), sizeof(char*));

	return (0);*/
}
