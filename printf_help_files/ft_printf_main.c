#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include "../ft_printf.h"

#define RED "\033[1m\033[31m"
#define GREEN "\033[1m\033[32m" 
#define YELLOW "\033[1m\033[33m"
#define BLUE "\033[1m\033[34m"
#define MAGENTA "\033[1m\033[35m"
#define CYAN "\033[1m\033[36m"
#define WHITE "\033[1m\033[37m"
#define RESET "\x1b[0m"

// ls ../../script_test/ft_printf_tests/

int god;
int fail;



void	rock_or_fail(int a, int b, int *test)	
{
	printf("\nYOURS = [%d] // PRINTF = [%d]\n", b, a);
	if (a == b)
	{
		printf(GREEN "\n%d---------------------------------------[ OK :) ]\n" RESET, *test);
	}
	else
	{
		printf(MAGENTA "%d-------------------------------------[ NOPE :( ]\n" RESET, *test);
		if (fail == 0)
			fail = *test;
		god++;
	}
	if (*test == 1841)
		exit(0);
	(*test)++;
}

int		main()
{
	int bli = 0;
	int ble = 1234;
	char *str = "qwer";
	unsigned int bla = 1234;
	int hex = 1234;
	char c = 'a';
	int cresc;
	int t = 12;
	char	*p1 = "abcdef";
	int 	*p2;
	p2 = NULL;
	int wowo = -20;

int test;
int a;
int b;

test = 1;

	printf("[%12c] [%1c] \n", 0, 95);
	ft_printf("[%12c] [%1c] \n", 0, 95);
}


void	print_block(f_list block)
{
	printf ("\n-------------------------------------------------------------------\n");
	printf ("\nPrinting all the values of block\n");
	printf ("width - %d\n", block.width);
	printf ("precision - %d\n", block.precision);
	printf ("w.star - %d\n", block.w_star);
	printf ("p.star - %d\n", block.p_star);
	printf ("precision avail? - %d\n", block.p_avail);
	printf ("zero flag - %d\n", block.zero_flag);
	printf ("minus flag - %d\n", block.minus_flag);
	printf ("block count - %d\n", block.count);
	printf ("\n\n\n-------------------------------------------------------------------\n");

}
