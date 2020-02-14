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

int test;
int a;
int b;

test = 1;

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST SIMPLE                      \n");
printf("--------------------------------------------------\n" 	RESET);

	a = printf("[%c]", c);
	b = ft_printf("[%c]", c);
	rock_or_fail(a, b, &test);

	a = printf("[%s]", str);
	b = ft_printf("[%s]", str);
	rock_or_fail(a, b, &test);

	a = printf("[%p]", &str);
	b = ft_printf("[%p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%d]", bli);
	b = ft_printf("[%d]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%d]", ble);
	b = ft_printf("[%d]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%i]", bli);
	b = ft_printf("[%i]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%i]", ble);
	b = ft_printf("[%i]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%u]", bla);
	b = ft_printf("[%u]", bla);
	rock_or_fail(a, b, &test);

	a = printf("[%x]", hex);
	b = ft_printf("[%x]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%X]", hex);
	b = ft_printf("[%X]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%%]");
	b = ft_printf("[%%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST WIDTH 2                     \n");
printf("--------------------------------------------------\n"RESET);

	a = printf("[%2c]", c);
	b = ft_printf("[%2c]", c);
	rock_or_fail(a, b, &test);

	a = printf("[%2s]", str);
	b = ft_printf("[%2s]", str);
	rock_or_fail(a, b, &test);

	a = printf("[%2p]", &str);
	b = ft_printf("[%2p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%2d]", bli);
	b = ft_printf("[%2d]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%2d]", ble);
	b = ft_printf("[%2d]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%2i]", bli);
	b = ft_printf("[%2i]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%2i]", ble);
	b = ft_printf("[%2i]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%2u]", bla);
	b = ft_printf("[%2u]", bla);
	rock_or_fail(a, b, &test);

	a = printf("[%2x]", hex);
	b = ft_printf("[%2x]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%2X]", hex);
	b = ft_printf("[%2X]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%2%]");
	b = ft_printf("[%2%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST WIDTH 15                    \n");
printf("--------------------------------------------------\n"RESET);


	a = printf("[%15c]", c);
	b = ft_printf("[%15c]", c);
	rock_or_fail(a, b, &test);

	a = printf("[%15s]", str);
	b = ft_printf("[%15s]", str);
	rock_or_fail(a, b, &test);	

	a = printf("[%15p]", &str);
	b = ft_printf("[%15p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%15d]", bli);
	b = ft_printf("[%15d]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%15d]", ble);
	b = ft_printf("[%15d]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%15i]", bli);
	b = ft_printf("[%15i]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%15i]", ble);
	b = ft_printf("[%15i]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%15u]", bla);
	b = ft_printf("[%15u]", bla);
	rock_or_fail(a, b, &test);

	a = printf("[%15x]", hex);
	b = ft_printf("[%15x]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%15X]", hex);
	b = ft_printf("[%15X]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%15%]");
	b = ft_printf("[%15%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST WIDTH 0                     \n");
printf("--------------------------------------------------\n"RESET);


	a = printf("[%0d]", bli);
	b = ft_printf("[%0d]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%0d]", ble);
	b = ft_printf("[%0d]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%0i]", bli);
	b = ft_printf("[%0i]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%0i]", ble);
	b = ft_printf("[%0i]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%0u]", bla);
	b = ft_printf("[%0u]", bla);
	rock_or_fail(a, b, &test);

	a = printf("[%0x]", hex);
	b = ft_printf("[%0x]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%0X]", hex);
	b = ft_printf("[%0X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0%]");
	b = ft_printf("[%0%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST WIDTH -5                    \n");
printf("--------------------------------------------------\n"RESET);


	a = printf("[%-5c]", c);
	b = ft_printf("[%-5c]", c);
	rock_or_fail(a, b, &test);

	a = printf("[%-5s]", str);
	b = ft_printf("[%-5s]", str);
	rock_or_fail(a, b, &test);

	a = printf("[%-5p]", &str);
	b = ft_printf("[%-5p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%-5d]", bli);
	b = ft_printf("[%-5d]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%-5d]", ble);
	b = ft_printf("[%-5d]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%-5i]", bli);
	b = ft_printf("[%-5i]", bli);
	rock_or_fail(a, b, &test);

	a = printf("[%-5i]", ble);
	b = ft_printf("[%-5i]", ble);
	rock_or_fail(a, b, &test);

	a = printf("[%-5u]", bla);
	b = ft_printf("[%-5u]", bla);
	rock_or_fail(a, b, &test);

	a = printf("[%-5x]", hex);
	b = ft_printf("[%-5x]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%-5X]", hex);
	b = ft_printf("[%-5X]", hex);
	rock_or_fail(a, b, &test);

	a = printf("[%-5%]");
	b = ft_printf("[%-5%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("              TEST WIDTH * -20 < 20                \n");
printf("--------------------------------------------------\n"RESET);

	int wowo = -20;

	while (wowo <= 20)
	{
		a = printf("[%*c]", wowo, c);
		b = ft_printf("[%*c]", wowo, c);
		rock_or_fail(a, b, &test);

		a = printf("[%*s]", wowo, str);
		b = ft_printf("[%*s]", wowo, str);
		rock_or_fail(a, b, &test);

		a = printf("[%*p]", wowo, &str);
		b = ft_printf("[%*p]", wowo, &str);
		rock_or_fail(a, b, &test);
		
		a = printf("[%*d]", wowo, bli);
		b = ft_printf("[%*d]", wowo, bli);
		rock_or_fail(a, b, &test);
		
		a = printf("[%*d]", wowo, ble);
		b = ft_printf("[%*d]", wowo, ble);
		rock_or_fail(a, b, &test);
		
		a = printf("[%*i]", wowo, bli);
		b = ft_printf("[%*i]", wowo, bli);
		rock_or_fail(a, b, &test);
		
		a = printf("[%*i]", wowo, ble);
		b = ft_printf("[%*i]", wowo, ble);
		rock_or_fail(a, b, &test);
		
		a = printf("[%*u]", wowo, ble);
		b = ft_printf("[%*u]", wowo, bla);
		rock_or_fail(a, b, &test);
		
		a = printf("[%*x]", wowo, hex);
		b = ft_printf("[%*x]", wowo, hex);
		rock_or_fail(a, b, &test);
		
		a = printf("[%*X]", wowo, hex);
		b = ft_printf("[%*X]", wowo, hex);
		rock_or_fail(a, b, &test);
		
		a = printf("[%*%]", wowo);
		b = ft_printf("[%*%]", wowo);
		rock_or_fail(a, b, &test);

		wowo++;
	}

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST WIDTH * 50                  \n");
printf("--------------------------------------------------\n"RESET);

	int wuwu = 50;

	a = printf("[%*c]", wuwu, c);
	b = ft_printf("[%*c]", wuwu, c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*s]", wuwu, str);
	b = ft_printf("[%*s]", wuwu, str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*p]", wuwu, &str);
	b = ft_printf("[%*p]", wuwu, &str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*d]", wuwu, bli);
	b = ft_printf("[%*d]", wuwu, bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*d]", wuwu, ble);
	b = ft_printf("[%*d]", wuwu, ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*i]", wuwu, bli);
	b = ft_printf("[%*i]", wuwu, bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*i]", wuwu, ble);
	b = ft_printf("[%*i]", wuwu, ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*u]", wuwu, bla);
	b = ft_printf("[%*u]", wuwu, bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*x]", wuwu, hex);
	b = ft_printf("[%*x]", wuwu, hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*X]", wuwu, hex);
	b = ft_printf("[%*X]", wuwu, hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*%]", wuwu);
	b = ft_printf("[%*%]", wuwu);
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST PRECISION .                \n");
printf("--------------------------------------------------\n"RESET);

	a = printf("[%.c]", c);
	b = ft_printf("[%.c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.s]", str);
	b = ft_printf("[%.s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.p]", &str);
	b = ft_printf("[%.p]", &str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.d]", bli);
	b = ft_printf("[%.d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.d]", ble);
	b = ft_printf("[%.d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.i]", bli);
	b = ft_printf("[%.i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.i]", ble);
	b = ft_printf("[%.i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.u]", bla);
	b = ft_printf("[%.u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.x]", hex);
	b = ft_printf("[%.x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.X]", hex);
	b = ft_printf("[%.X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.%]");
	b = ft_printf("[%.%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST PRECISION .0                \n");
printf("--------------------------------------------------\n"RESET);

	
	a = printf("[%.0s]", str);
	b = ft_printf("[%.0s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.0d]", bli);
	b = ft_printf("[%.0d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.0d]", ble);
	b = ft_printf("[%.0d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.0i]", bli);
	b = ft_printf("[%.0i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.0i]", ble);
	b = ft_printf("[%.0i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.0u]", bla);
	b = ft_printf("[%.0u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.0x]", hex);
	b = ft_printf("[%.0x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.0X]", hex);
	b = ft_printf("[%.0X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.0%]");
	b = ft_printf("[%.0%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST PRECISION .10                \n");
printf("--------------------------------------------------\n"RESET);
	
	a = printf("[%.10s]", str);
	b = ft_printf("[%.10s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10d]", bli);
	b = ft_printf("[%.10d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10d]", ble);
	b = ft_printf("[%.10d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10i]", bli);
	b = ft_printf("[%.10i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10i]", ble);
	b = ft_printf("[%.10i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10u]", bla);
	b = ft_printf("[%.10u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10x]", hex);
	b = ft_printf("[%.10x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10X]", hex);
	b = ft_printf("[%.10X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10%]");
	b = ft_printf("[%.10%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST PRECISION .45                \n");
printf("--------------------------------------------------\n"RESET);
	
	a = printf("[%.45s]", str);
	b = ft_printf("[%.45s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45d]", bli);
	b = ft_printf("[%.45d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45d]", ble);
	b = ft_printf("[%.45d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45i]", bli);
	b = ft_printf("[%.45i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45i]", ble);
	b = ft_printf("[%.45i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45u]", bla);
	b = ft_printf("[%.45u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45x]", hex);
	b = ft_printf("[%.45x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45X]", hex);
	b = ft_printf("[%.45X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45%]");
	b = ft_printf("[%.45%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST PRECISION .1                \n");
printf("--------------------------------------------------\n"RESET);
	
	a = printf("[%.1s]", str);
	b = ft_printf("[%.1s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1d]", bli);
	b = ft_printf("[%.1d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1d]", ble);
	b = ft_printf("[%.1d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1i]", bli);
	b = ft_printf("[%.1i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1i]", ble);
	b = ft_printf("[%.1i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1u]", bla);
	b = ft_printf("[%.1u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1x]", hex);
	b = ft_printf("[%.1x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1X]", hex);
	b = ft_printf("[%.1X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1%]");
	b = ft_printf("[%.1%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("             TEST str PRECISION * .-10 > .20              \n");
printf("--------------------------------------------------\n"RESET);

	cresc = -10;
	
	while (cresc <= 20)
	{
		printf("cresc = %d\n", cresc);
		a = printf("[%.*s]", cresc, str);
		b = ft_printf("[%.*s]", cresc, str);
		rock_or_fail(a, b, &test);

		cresc++;
	}

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("            TEST all PRECISION * .-10 > .20               \n");
printf("--------------------------------------------------\n"RESET);
	cresc = -10;

	while (cresc <= 20)
	{
		a = printf("[%.1s]", str);
		b = ft_printf("[%.1s]", str);
		rock_or_fail(a, b, &test);
		

		
		a = printf("[%.1d]", bli);
		b = ft_printf("[%.1d]", bli);
		rock_or_fail(a, b, &test);
		
		a = printf("[%.1d]", ble);
		b = ft_printf("[%.1d]", ble);
		rock_or_fail(a, b, &test);
		
		a = printf("[%.1i]", bli);
		b = ft_printf("[%.1i]", bli);
		rock_or_fail(a, b, &test);
		
		a = printf("[%.1i]", ble);
		b = ft_printf("[%.1i]", ble);
		rock_or_fail(a, b, &test);
		
		a = printf("[%.1u]", bla);
		b = ft_printf("[%.1u]", bla);
		rock_or_fail(a, b, &test);
		
		a = printf("[%.1x]", hex);
		b = ft_printf("[%.1x]", hex);
		rock_or_fail(a, b, &test);
		
		a = printf("[%.1X]", hex);
		b = ft_printf("[%.1X]", hex);
		rock_or_fail(a, b, &test);
		
		a = printf("[%.1%]");
		b = ft_printf("[%.1%]");
		rock_or_fail(a, b, &test);

		cresc++;
	}

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("             TEST WIDTH 5 PRECISION 10               \n");
printf("--------------------------------------------------\n"RESET);
	
	a = printf("[%5.10s]", str);
	b = ft_printf("[%5.10s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10d]", bli);
	b = ft_printf("[%5.10d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10d]", ble);
	b = ft_printf("[%5.10d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10i]", bli);
	b = ft_printf("[%5.10i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10i]", ble);
	b = ft_printf("[%5.10i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10u]", bla);
	b = ft_printf("[%5.10u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10x]", hex);
	b = ft_printf("[%5.10x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10X]", hex);
	b = ft_printf("[%5.10X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10%]");
	b = ft_printf("[%5.10%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("         TEST FLAG 0 NO WIDTH PRECISION 10               \n");
printf("--------------------------------------------------\n"RESET);
	
	a = printf("[%0.10d]", bli);
	b = ft_printf("[%0.10d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10d]", ble);
	b = ft_printf("[%0.10d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10i]", bli);
	b = ft_printf("[%0.10i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10i]", ble);
	b = ft_printf("[%0.10i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10u]", bla);
	b = ft_printf("[%0.10u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10x]", hex);
	b = ft_printf("[%0.10x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10X]", hex);
	b = ft_printf("[%0.10X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10%]");
	b = ft_printf("[%0.10%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("         TEST FLAG - NO WIDTH PRECISION 05               \n");
printf("--------------------------------------------------\n"RESET);
	
	a = printf("[%-.05s]", str);
	b = ft_printf("[%-.05s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05d]", bli);
	b = ft_printf("[%-.05d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05d]", ble);
	b = ft_printf("[%-.05d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05i]", bli);
	b = ft_printf("[%-.05i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05i]", ble);
	b = ft_printf("[%-.05i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05u]", bla);
	b = ft_printf("[%-.05u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05x]", hex);
	b = ft_printf("[%-.05x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05X]", hex);
	b = ft_printf("[%-.05X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05%]");
	b = ft_printf("[%-.05%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("         TEST FLAG - WIDTH 25 PRECISION 10               \n");
printf("--------------------------------------------------\n"RESET);
	
	a = printf("[%-25.10s]", str);
	b = ft_printf("[%-25.10s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10d]", bli);
	b = ft_printf("[%-25.10d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10d]", ble);
	b = ft_printf("[%-25.10d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10i]", bli);
	b = ft_printf("[%-25.10i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10i]", ble);
	b = ft_printf("[%-25.10i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10u]", bla);
	b = ft_printf("[%-25.10u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10x]", hex);
	b = ft_printf("[%-25.10x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10X]", hex);
	b = ft_printf("[%-25.10X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10%]");
	b = ft_printf("[%-25.10%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("         TEST FLAG 0 WIDTH 2 PRECISION 10               \n");
printf("--------------------------------------------------\n"RESET);
	
	a = printf("[%02.10d]", bli);
	b = ft_printf("[%02.10d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10d]", ble);
	b = ft_printf("[%02.10d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10i]", bli);
	b = ft_printf("[%02.10i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10i]", ble);
	b = ft_printf("[%02.10i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10u]", bla);
	b = ft_printf("[%02.10u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10x]", hex);
	b = ft_printf("[%02.10x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10X]", hex);
	b = ft_printf("[%02.10X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10%]");
	b = ft_printf("[%02.10%]");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("       TEST FLAG 0 * WIDTH * PRECISION -10>10             \n");
printf("--------------------------------------------------\n"RESET);

	int miaou;
	int waf = 0;

	while (waf <= 5)
	{
		miaou = 0;
		while (miaou <= 5)
		{
			//printf("\n\n********WIDTH %d // PRECISION %d*********\n", waf, miaou);
			
		printf("%d,%d,%d\n", waf, miaou, bli);
			a = printf("[%0*.*d]", waf, miaou, bli);
			b = ft_printf("[%0*.*d]", waf, miaou, bli);
			rock_or_fail(a, b, &test);
			
			a = printf("[%0*.*d]", waf, miaou, ble);
			b = ft_printf("[%0*.*d]", waf, miaou, ble);
			rock_or_fail(a, b, &test);
			
			a = printf("[%0*.*i]", waf, miaou, bli);
			b = ft_printf("[%0*.*i]", waf, miaou, bli);
			rock_or_fail(a, b, &test);
			
			a = printf("[%0*.*i]", waf, miaou, ble);
			b = ft_printf("[%0*.*i]", waf, miaou, ble);
			rock_or_fail(a, b, &test);
			
			a = printf("[%0*.*u]", waf, miaou, bla);
			b = ft_printf("[%0*.*u]", waf, miaou, bla);
			rock_or_fail(a, b, &test);
			
			a = printf("[%0*.*x]", waf, miaou, hex);
			b = ft_printf("[%0*.*x]", waf, miaou, hex);
			rock_or_fail(a, b, &test);
			
			a = printf("[%0*.*X]", waf, miaou, hex);
			b = ft_printf("[%0*.*X]", waf, miaou, hex);
			rock_or_fail(a, b, &test);
			
			a = printf("[%0*.*%]", waf, miaou); 
			b = ft_printf("[%0*.*%]", waf, miaou);
			rock_or_fail(a, b, &test);

			miaou++;
		}
		waf++;
	}

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                TEST WTF ---*              \n");
printf("--------------------------------------------------\n"RESET);

	int vitamineb = 12;

	a = printf("[%---*c]", vitamineb, c);
	b = ft_printf("[%---*c]", vitamineb, c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*s]", vitamineb, str);
	b = ft_printf("[%---*s]", vitamineb, str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*p]", vitamineb, &str);
	b = ft_printf("[%---*p]", vitamineb, &str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*d]", vitamineb, bli);
	b = ft_printf("[%---*d]", vitamineb, bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*d]", vitamineb, ble);
	b = ft_printf("[%---*d]", vitamineb, ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*i]", vitamineb, bli);
	b = ft_printf("[%---*i]", vitamineb, bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*i]", vitamineb, ble);
	b = ft_printf("[%---*i]", vitamineb, ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*u]", vitamineb, bla);
	b = ft_printf("[%---*u]", vitamineb, bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*x]", vitamineb, hex);
	b = ft_printf("[%---*x]", vitamineb, hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*X]", vitamineb, hex);
	b = ft_printf("[%---*X]", vitamineb, hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%---*%]", vitamineb); 
	b = ft_printf("[%---*%]", vitamineb); 
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                TEST WTF 000*              \n");
printf("--------------------------------------------------\n"RESET);

	
	a = printf("[%000*d]", vitamineb, bli);
	b = ft_printf("[%000*d]", vitamineb, bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*d]", vitamineb, ble);
	b = ft_printf("[%000*d]", vitamineb, ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*i]", vitamineb, bli);
	b = ft_printf("[%000*i]", vitamineb, bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*i]", vitamineb, ble);
	b = ft_printf("[%000*i]", vitamineb, ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*u]", vitamineb, bla);
	b = ft_printf("[%000*u]", vitamineb, bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*x]", vitamineb, hex);
	b = ft_printf("[%000*x]", vitamineb, hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*X]", vitamineb, hex);
	b = ft_printf("[%000*X]", vitamineb, hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*%]", vitamineb); 
	b = ft_printf("[%000*%]", vitamineb); 
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                TEST WTF INPUT             \n");
printf("--------------------------------------------------\n"RESET);
//test 1222

	char bad = 0;
	char ugly = 11;
	char *dumb = "";
	char *blep = NULL;
	void *blip = NULL;
	int fat = 2147483647;
	int smol = -2147483648;
	unsigned int fake = -568;

	a = printf("[o%c][o%c]", bad, ugly);
	b = ft_printf("[o%c][o%c]", bad, ugly);
	rock_or_fail(a, b, &test);
	
	a = printf("[%s][%s][%s]", blep, dumb, blip);
	b = ft_printf("[%s][%s][%s]", blep, dumb, blip);
	rock_or_fail(a, b, &test);
	
	a = printf("[%*p]", -1, blip);
	b = ft_printf("[%*p]", -1, blip);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000d]", fat);
	b = ft_printf("[%000d]", fat);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000d]", smol);
	b = ft_printf("[%000d]", smol);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000i]", fat);
	b = ft_printf("[%000i]", fat);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000i]", smol);
	b = ft_printf("[%000i]", smol);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000u]", fake);
	b = ft_printf("[%000u]", fake);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000x]", smol);
	b = ft_printf("[%000x]", smol);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000X]", smol);
	b = ft_printf("[%000X]", smol);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000.*%]", vitamineb); 
	b = ft_printf("[%000.*%]", vitamineb); 
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("               TEST WTF INPUT %%              \n");
printf("--------------------------------------------------\n"RESET);


	a = printf("[%%%%%%%%%%%c]", c);
	b = ft_printf("[%%%%%%%%%%%c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%s]", str);
	b = ft_printf("[%%%%%%%%%%%s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%p]", &str);
	b = ft_printf("[%%%%%%%%%%%p]", &str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%d]", bli);
	b = ft_printf("[%%%%%%%%%%%d]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%d]", ble);
	b = ft_printf("[%%%%%%%%%%%d]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%i]", bli);
	b = ft_printf("[%%%%%%%%%%%i]", bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%i]", ble);
	b = ft_printf("[%%%%%%%%%%%i]", ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%u]", bla);
	b = ft_printf("[%%%%%%%%%%%u]", bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%x]", hex);
	b = ft_printf("[%%%%%%%%%%%x]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%X]", hex);
	b = ft_printf("[%%%%%%%%%%%X]", hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%%]"); 
	b = ft_printf("[%%%%%%%%%%%%]"); 
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("               TEST WTF INPUT %%%%s              \n");
printf("--------------------------------------------------\n"RESET);


	a = printf("[%%%%%%%%%%%c%s]", c, str);
	b = ft_printf("[%%%%%%%%%%%c%s]", c, str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%s%s]", str,str);
	b = ft_printf("[%%%%%%%%%%%s%s]", str,str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%p%s]", &str, str);
	b = ft_printf("[%%%%%%%%%%%p%s]", &str, str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%d%s]", bli,str);
	b = ft_printf("[%%%%%%%%%%%d%s]", bli,str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%d%s]", ble,str);
	b = ft_printf("[%%%%%%%%%%%d%s]", ble,str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%i%s]", bli,str);
	b = ft_printf("[%%%%%%%%%%%i%s]", bli,str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%i%s]", ble,str);
	b = ft_printf("[%%%%%%%%%%%i%s]", ble,str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%u%s]", bla,str);
	b = ft_printf("[%%%%%%%%%%%u%s]", bla,str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%x%s]", hex,str);
	b = ft_printf("[%%%%%%%%%%%x%s]", hex,str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%X%s]", hex,str);
	b = ft_printf("[%%%%%%%%%%%X%s]", hex,str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%%%%%%%%%%%%%s]", str); 
	b = ft_printf("[%%%%%%%%%%%%%s]", str); 
	rock_or_fail(a, b, &test);


printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                TEST WTF .*              \n");
printf("--------------------------------------------------\n"RESET);

	
	a = printf("[%.*s]", vitamineb, str);
	b = ft_printf("[%.*s]", vitamineb, str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*d]", vitamineb, bli);
	b = ft_printf("[%.*d]", vitamineb, bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*d]", vitamineb, ble);
	b = ft_printf("[%.*d]", vitamineb, ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*i]", vitamineb, bli);
	b = ft_printf("[%.*i]", vitamineb, bli);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*i]", vitamineb, ble);
	b = ft_printf("[%.*i]", vitamineb, ble);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*u]", vitamineb, bla);
	b = ft_printf("[%.*u]", vitamineb, bla);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*x]", vitamineb, hex);
	b = ft_printf("[%.*x]", vitamineb, hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*X]", vitamineb, hex);
	b = ft_printf("[%.*X]", vitamineb, hex);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*%]", vitamineb); 
	b = ft_printf("[%.*%]", vitamineb); 
	rock_or_fail(a, b, &test);


printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                 TEST 42FileChecker                     \n");
printf("--------------------------------------------------\n"RESET);

	a = printf("pp %.50d\n", 10000);
	b = ft_printf("pp %.50d\n", 10000);
	rock_or_fail(a, b, &test);

	a = printf("p1 %.4s\n", "cccc");
	b = ft_printf("p1 %.4s\n", "cccc");
	rock_or_fail(a, b, &test);

	a = printf("p2 %.10s\n", "cccc");
	b = ft_printf("p2 %.10s\n", "cccc");
	rock_or_fail(a, b, &test);

	a = printf("p3 %.4s\n", NULL);
	b = ft_printf("p3 %.4s\n", NULL);
	rock_or_fail(a, b, &test);

	a = printf("p4 %.5s\n", "aaaaa");
	b = ft_printf("p4 %.5s\n", "aaaaa");
	rock_or_fail(a, b, &test);

	a = printf("p5 %.3d\n", 100);
	b = ft_printf("p5 %.3d\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p6 %.0d\n", 100);
	b = ft_printf("p6 %.0d\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p7 %.4d\n", 100);
	b = ft_printf("p7 %.4d\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p8 %.10d\n", 100);
	b = ft_printf("p8 %.10d\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p9 %.50d\n", 100);
	b = ft_printf("p9 %.50d\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p10 %.1d\n", 100);
	b = ft_printf("p10 %.1d\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p11 %.3d\n", 100);
	b = ft_printf("p11 %.3d\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p12 %.0d\n", 0);
	b = ft_printf("p12 %.0d\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("p13 %.3i\n", 100);
	b = ft_printf("p13 %.3i\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p14 %.0i\n", 100);
	b = ft_printf("p14 %.0i\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p15 %.4i\n", 100);
	b = ft_printf("p15 %.4i\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p16 %.10i\n", 100);
	b = ft_printf("p16 %.10i\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p17 %.50i\n", 100);
	b = ft_printf("p17 %.50i\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p18 %.1i\n", 100);
	b = ft_printf("p18 %.1i\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p19 %.3x\n", 100);
	b = ft_printf("p19 %.3x\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p20 %.0x\n", 0);
	b = ft_printf("p20 %.0x\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("p21 %.3x\n", 100);
	b = ft_printf("p21 %.3x\n", 100);
	rock_or_fail(a, b, &test);


	a = printf("p22 %.0x\n", 100);
	b = ft_printf("p22 %.0x\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p23 %.4x\n", 100);
	b = ft_printf("p23 %.4x\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p24 %.10x\n", 100);
	b = ft_printf("p24 %.10x\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p25 %.50x\n", 100);
	b = ft_printf("p25 %.50x\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p26 %.1x\n", 100);
	b = ft_printf("p26 %.1x\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p27 %.3x\n", 100);
	b = ft_printf("p27 %.3x\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p28 %.0x\n", 0);
	b = ft_printf("p28 %.0x\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("p29 %.3u\n", 100);
	b = ft_printf("p29 %.3u\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p30 %.0u\n", 100);
	b = ft_printf("p30 %.0u\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p31 %.4u\n", 100);
	b = ft_printf("p31 %.4u\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p32 %.10u\n", 100);
	b = ft_printf("p32 %.10u\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p33 %.50u\n", 100);
	b = ft_printf("p33 %.50u\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p34 %.1u\n", 100);
	b = ft_printf("p34 %.1u\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p35 %.3u\n", 100);
	b = ft_printf("p35 %.3u\n", 100);
	rock_or_fail(a, b, &test);

	a = printf("p36 %.0u\n", 0);
	b = ft_printf("p36 %.0u\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%%\n");
	b = ft_printf("%%\n");
	rock_or_fail(a, b, &test);

	a = printf("Hello 42 school! %s", NULL);
	b = ft_printf("Hello 42 school! %s", NULL);
	rock_or_fail(a, b, &test);

	a = printf("%010%");
	b = ft_printf("%010%");
	rock_or_fail(a, b, &test);

	a = printf("%d\n", 2147483647);
	b = ft_printf("%d\n", 2147483647);
	rock_or_fail(a, b, &test);

	a = printf("%x\n", 2147483647);
	b = ft_printf("%x\n", 2147483647);
	rock_or_fail(a, b, &test);

	a = printf("%X\n", 2147483647);
	b = ft_printf("%X\n", 2147483647);
	rock_or_fail(a, b, &test);

	a = printf("%x\n", 0);
	b = ft_printf("%x\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%010x\n", 0);
	b = ft_printf("%010x\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%010x\n", 20);
	b = ft_printf("%010x\n", 20);
	rock_or_fail(a, b, &test);

	a = printf("%010x\n", -20);
	b = ft_printf("%010x\n", -20);
	rock_or_fail(a, b, &test);

	a = printf("%10x\n", 20);
	b = ft_printf("%10x\n", 20);
	rock_or_fail(a, b, &test);

	a = printf("%10.2x\n", -20);
	b = ft_printf("%10.2x\n", -20);
	rock_or_fail(a, b, &test);

	a = printf("%-10x\n", 50);
	b = ft_printf("%-10x\n", 50);
	rock_or_fail(a, b, &test);

	a = printf("%-15x\n", 0);
	b = ft_printf("%-15x\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%.1x\n", 500);
	b = ft_printf("%.1x\n", 500);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x\n", 50, 10, 2);
	b = ft_printf("%*.*x\n", 50, 10, 2);
	rock_or_fail(a, b, &test);

	a = printf("%x\n", -1);
	b = ft_printf("%x\n", -1);
	rock_or_fail(a, b, &test);

	a = printf("%40.50d\n", 50);
	b = ft_printf("%40.50d\n", 50);
	rock_or_fail(a, b, &test);

	a = printf("%d\n", -589);
	b = ft_printf("%d\n", -589);
	rock_or_fail(a, b, &test);

	a = printf("%-4d\n", -2464);
	b = ft_printf("%-4d\n", -2464);
	rock_or_fail(a, b, &test);

	a = printf("%.5d\n", -2372);
	b = ft_printf("%.5d\n", -2372);
	rock_or_fail(a, b, &test);

	a = printf("%p\n", NULL);
	b = ft_printf("%p\n", NULL);
	rock_or_fail(a, b, &test);

	a = printf("%15p\n", NULL);
	b = ft_printf("%15p\n", NULL);
	rock_or_fail(a, b, &test);

	a = printf("%-15p\n", NULL);
	b = ft_printf("%-15p\n", NULL);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%010d]\n", -8473);
	b = ft_printf("%%p::[%010d]\n", -8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%10d]\n", -8473);
	b = ft_printf("%%p::[%10d]\n", -8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%.5d]\n", -8473);
	b = ft_printf("%%p::[%.5d]\n", -8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%01.1d]\n", -8473);
	b = ft_printf("%%p::[%01.1d]\n", -8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%010.1d]\n", -8473);
	b = ft_printf("%%p::[%010.1d]\n", -8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%01.50d]\n", -8473);
	b = ft_printf("%%p::[%01.50d]\n", -8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%1.50d]\n", -8473);
	b = ft_printf("%%p::[%1.50d]\n", -8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%0100.50d]\n", -8473);
	b = ft_printf("%%p::[%0100.50d]\n", -8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%010d]\n", 8473);
	b = ft_printf("%%p::[%010d]\n", 8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%10d]\n", 8473);
	b = ft_printf("%%p::[%10d]\n", 8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%.5d]\n", 8473);
	b = ft_printf("%%p::[%.5d]\n", 8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%01.1d]\n", 8473);
	b = ft_printf("%%p::[%01.1d]\n", 8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%010.1d]\n", 8473);
	b = ft_printf("%%p::[%010.1d]\n", 8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%01.50d]\n", 8473);
	b = ft_printf("%%p::[%01.50d]\n", 8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%1.50d]\n", 8473);
	b = ft_printf("%%p::[%1.50d]\n", 8473);
	rock_or_fail(a, b, &test);

	a = printf("%%p::[%0100.50d]\n", 8473);
	b = ft_printf("%%p::[%0100.50d]\n", 8473);
	rock_or_fail(a, b, &test);

	a = printf("%10s\n", "Ok");
	b = ft_printf("%10s\n", "Ok");
	rock_or_fail(a, b, &test);

	a = printf("%10s\n", NULL);
	b = ft_printf("%10s\n", NULL);
	rock_or_fail(a, b, &test);

	a = printf("%.1s\n", "Test");
	b = ft_printf("%.1s\n", "Test");
	rock_or_fail(a, b, &test);

	a = printf("[%5.0s\n]", "Hello");
	b = ft_printf("[%5.0s\n]", "Hello");
	rock_or_fail(a, b, &test);

	a = printf("%50.2s\n", NULL);
	b = ft_printf("%50.2s\n", NULL);
	rock_or_fail(a, b, &test);

	a = printf("%50.2s\n", "Coucou");
	b = ft_printf("%50.2s\n", "Coucou");
	rock_or_fail(a, b, &test);

	a = printf("%1c\n", 'y');
	b = ft_printf("%1c\n", 'y');
	rock_or_fail(a, b, &test);

	a = printf("%c\n", 0);
	b = ft_printf("%c\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%c\n", 'a');
	b = ft_printf("%c\n", 'a');
	rock_or_fail(a, b, &test);

	a = printf("%10c\n", 't');
	b = ft_printf("%10c\n", 't');
	rock_or_fail(a, b, &test);

	a = printf("%1p\n", &t);
	b = ft_printf("%1p\n", &t);
	rock_or_fail(a, b, &test);

	a = printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42);
	b = ft_printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("4chiffre 1 %-12d chiffre 2 %-12d\n\n", 42, -42);
	b = ft_printf("4chiffre 1 %-12d chiffre 2 %-12d\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("t1 %050d\n", 10);
	b = ft_printf("t1 %050d\n", 10);
	rock_or_fail(a, b, &test);

	a = printf("t2 %-50d\n", 10);
	b = ft_printf("t2 %-50d\n", 10);
	rock_or_fail(a, b, &test);

	a = printf("t3 %50.0d\n", 10);
	b = ft_printf("t3 %50.0d\n", 10);
	rock_or_fail(a, b, &test);


	a = printf("t4 %50.50d\n", 10);
	b = ft_printf("t4 %50.50d\n", 10);
	rock_or_fail(a, b, &test);

		a = printf("t5 %50.10d\n", 10);
	b = ft_printf("t5 %50.10d\n", 10);
	rock_or_fail(a, b, &test);

	a = printf("t6 %*.*d\n", 50,  5, 10);
	b = ft_printf("t6 %*.*d\n", 50,  5, 10);
	rock_or_fail(a, b, &test);
	a = printf("t7 %1.50d\n", -10);
	b = ft_printf("t7 %1.50d\n", -10);
	rock_or_fail(a, b, &test);

	a = printf("t8 %1.50d\n", 10);
	b = ft_printf("t8 %1.50d\n", 10);
	rock_or_fail(a, b, &test);

	a = printf("t9 %2.2d\n", 10);
	b = ft_printf("t9 %2.2d\n", 10);
	rock_or_fail(a, b, &test);

	a = printf("t10 %2.2d\n", -10);
	b = ft_printf("t10 %2.2d\n", -10);
	rock_or_fail(a, b, &test);

	a = printf("t12 %.0d\n", 0);
	b = ft_printf("t12 %.0d\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("t13 %01d\n", -20);
	b = ft_printf("t13 %01d\n", -20);
	rock_or_fail(a, b, &test);

	a = printf("t14 %10d\n", 1000);
	b = ft_printf("t14 %10d\n", 1000);
	rock_or_fail(a, b, &test);

	a = printf("5chiffre 1 %0d chiffre 2 %0d\n\n", 42, -42);
	b = ft_printf("5chiffre 1 %0d chiffre 2 %0d\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("6chiffre 1 %012d chiffre 2 %012d\n\n", 42, -42);
	b = ft_printf("6chiffre 1 %012d chiffre 2 %012d\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("8chiffre 1 %*d chiffre 2 %*d\n\n", 42, 6, 6, 6);
	b = ft_printf("8chiffre 1 %*d chiffre 2 %*d\n\n", 42, 6, 6, 6);
	rock_or_fail(a, b, &test);

	a = printf("15chiffre 1 %.d chiffre 2 %.d\n\n", 42, -42);
	b = ft_printf("15chiffre 1 %.d chiffre 2 %.d\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("4caractere 1 %12c caractere 2 %12c\n\n", 'a', 'c');
	b = ft_printf("4caractere 1 %12c caractere 2 %12c\n\n", 'a', 'c');
	rock_or_fail(a, b, &test);

	a = printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
	b = ft_printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
	rock_or_fail(a, b, &test);


	a = printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
	b = ft_printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
	rock_or_fail(a, b, &test);


	a = printf("1hexa-maj 1 %X hexa-maj 2 %X\n\n", 42, -42);
	b = ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n\n", 42, -42);
	rock_or_fail(a, b, &test);


	a = printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n\n", 42, -42);
	b = ft_printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n\n", 42, -42);
	b = ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n\n", 42, -42);
	b = ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n\n", 42, -42);
	b = ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n\n", 42, 6, 6, 6);
	b = ft_printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n\n", 42, 6, 6, 6);
	rock_or_fail(a, b, &test);

	a = printf("1pointeur 1 %p pointeur 2 %p\n\n", &c, &c);
	b = ft_printf("1pointeur 1 %p pointeur 2 %p\n\n", &c, &c);
	rock_or_fail(a, b, &test);


	a = printf("4pointeur 1 %12p pointeur 2 %12p\n\n", &c, &c);
	b = ft_printf("4pointeur 1 %12p pointeur 2 %12p\n\n", &c, &c);
	rock_or_fail(a, b, &test);

	a = printf("4pointeur 1 %-12p pointeur 2 %-12p\n\n", &c, &c);
	b = ft_printf("4pointeur 1 %-12p pointeur 2 %-12p\n\n", &c, &c);
	rock_or_fail(a, b, &test);


	a = printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42);
	b = ft_printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42);
	rock_or_fail(a, b, &test);


	a = printf("4unsigned 1 %12u unsigned 2 %12u\n\n", 42, -42);
	b = ft_printf("4unsigned 1 %12u unsigned 2 %12u\n\n", 42, -42);
	rock_or_fail(a, b, &test);


	a = printf("4unsigned 1 %12u unsigned 2 %12u\n\n", 42, -42);
	b = ft_printf("4unsigned 1 %12u unsigned 2 %12u\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("4unsigned 1 %-12u unsigned 2 %-12u\n\n", 42, -42);
	b = ft_printf("4unsigned 1 %-12u unsigned 2 %-12u\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("5unsigned 1 %0u unsigned 2 %0u\n\n", 42, -42);
	b = ft_printf("5unsigned 1 %0u unsigned 2 %0u\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("6unsigned 1 %012u unsigned 2 %012u\n\n", 42, -42);
	b = ft_printf("6unsigned 1 %012u unsigned 2 %012u\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("8unsigned 1 %*u unsigned 2 %*u\n\n", 42, 6, 6, 6);
	b = ft_printf("8unsigned 1 %*u unsigned 2 %*u\n\n", 42, 6, 6, 6);
	rock_or_fail(a, b, &test);

	a = printf("15unsigned 1 %.u unsigned 2 %.u\n\n", 42, -42);
	b = ft_printf("15unsigned 1 %.u unsigned 2 %.u\n\n", 42, -42);
	rock_or_fail(a, b, &test);


	a = printf("%%\n");
	b = ft_printf("%%\n");
	rock_or_fail(a, b, &test);

	a = printf("%-.12u\n", -20000000);
	b = ft_printf("%-.12u\n", -20000000);
	rock_or_fail(a, b, &test);

	a = printf("%-.12i\n", -20000000);
	b = ft_printf("%-.12i\n", -20000000);
	rock_or_fail(a, b, &test);

	a = printf("truc");
	b = ft_printf("truc");
	rock_or_fail(a, b, &test);


	a = printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	b = ft_printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	rock_or_fail(a, b, &test);

	a = printf("31 This is an int : %.0d\n\n", 0);
	b = ft_printf("31 This is an int : %.0d\n\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("32 This is an int : %0d\n\n", 0);
	b = ft_printf("32 This is an int : %0d\n\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("percent 1 %012%\n");
	b = ft_printf("percent 1 %012%\n");
	rock_or_fail(a, b, &test);

	a = printf("percent 2 %12%\n");
	b = ft_printf("percent 2 %12%\n");
	rock_or_fail(a, b, &test);

	a = printf("percent 3 %-12%\n");
	b = ft_printf("percent 3 %-12%\n");
	rock_or_fail(a, b, &test);

	a = printf("percent 4 %0%\n");
	b = ft_printf("percent 4 %0%\n");
	rock_or_fail(a, b, &test);

	a = printf("percent 5 % %\n");
	b = ft_printf("percent 5 % %\n");
	rock_or_fail(a, b, &test);

	a = printf("percent 6 % 15%\n");
	b = ft_printf("percent 6 % 15%\n");
	rock_or_fail(a, b, &test);

	a = printf("percent 7 % 12%\n");
	b = ft_printf("percent 7 % 12%\n");
	rock_or_fail(a, b, &test);

	a = printf("percent 8 %  *%\n", 13);
	b = ft_printf("percent 8 %  *%\n", 13);
	rock_or_fail(a, b, &test);
	
	a = printf("%d\n", 42);
	b = ft_printf("%d\n", 42);
	rock_or_fail(a, b, &test);


	a = printf("1string 1 %s string 2 %s\n\n", "toto", "bonjour");
	b = ft_printf("1string 1 %s string 2 %s\n\n", "toto", "bonjour");
	rock_or_fail(a, b, &test);


	a = printf("4string 1 %12s string 2 %12s\n\n", "toto", "bonjour");
	b = ft_printf("4string 1 %12s string 2 %12s\n\n", "toto", "bonjour");
	rock_or_fail(a, b, &test);

	a = printf("4string 1 %-12s string 2 %-12s\n\n", "toto", "bonjour");
	b = ft_printf("4string 1 %-12s string 2 %-12s\n\n", "toto", "bonjour");
	rock_or_fail(a, b, &test);

	a = printf("st1 %*.*d\n", 10, 10, 50);
	b = ft_printf("st1 %*.*d\n", 10, 10, 50);
	rock_or_fail(a, b, &test);

	a = printf("st2 %*.*d\n", 1, 50, 50);
	b = ft_printf("st2 %*.*d\n", 1, 50, 50);
	rock_or_fail(a, b, &test);

	a = printf("st3 %*.*d\n", 0, 0, 50);
	b = ft_printf("st3 %*.*d\n", 0, 0, 50);
	rock_or_fail(a, b, &test);

	a = printf("st4 %*.*d\n", 0, 50, 50);
	b = ft_printf("st4 %*.*d\n", 0, 50, 50);
	rock_or_fail(a, b, &test);

	a = printf("st5 %*.*d\n", 10, 0, 50);
	b = ft_printf("st5 %*.*d\n", 10, 0, 50);
	rock_or_fail(a, b, &test);


	a = printf("st6 %*.*d\n", 10, 10, 50);
	b = ft_printf("st6 %*.*d\n", 10, 10, 50);
	rock_or_fail(a, b, &test);

	a = printf("st12 %*d\n", 10, 50);
	b = ft_printf("st12 %*d\n", 10, 50);
	rock_or_fail(a, b, &test);

	a = printf("st13 %*d\n", 0, 0);
	b = ft_printf("st13 %*d\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("st14 %.*d\n", 0, 0);
	b = ft_printf("st14 %.*d\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("st15 %*d\n", 50, 5);
	b = ft_printf("st15 %*d\n", 50, 5);
	rock_or_fail(a, b, &test);

	a = printf("st16 %0.*d\n", 50, 5);
	b = ft_printf("st16 %0.*d\n", 50, 5);
	rock_or_fail(a, b, &test);

	a = printf("st17 %0.*d\n", 0, 0);
	b = ft_printf("st17 %0.*d\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("st7 %*.*s\n", 1, 50, "hey");
	b = ft_printf("st7 %*.*s\n", 1, 50, "hey");
	rock_or_fail(a, b, &test);

	a = printf("st8 %*.*s\n", 0, 0, "coucou");
	b = ft_printf("st8 %*.*s\n", 0, 0, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("st9 %*.*s\n", 0, 50, "hey");
	b = ft_printf("st9 %*.*s\n", 0, 50, "hey");
	rock_or_fail(a, b, &test);

	a = printf("st10 %*.*s\n", 10, 0, "dsa");
	b = ft_printf("st10 %*.*s\n", 10, 0, "dsa");
	rock_or_fail(a, b, &test);

	a = printf("st11 %*.*s\n", 10, 10, "hello");
	b = ft_printf("st11 %*.*s\n", 10, 10, "hello");
	rock_or_fail(a, b, &test);

	a = printf("st118 %*s\n", 100, "hello");
	b = ft_printf("st118 %*s\n", 100, "hello");
	rock_or_fail(a, b, &test);


	a = printf("st119 %*s\n", 1000, "hello");
	b = ft_printf("st119 %*s\n", 1000, "hello");
	rock_or_fail(a, b, &test);

	a = printf("st120 %*s\n", 10000, "hello");
	b = ft_printf("st120 %*s\n", 10000, "hello");
	rock_or_fail(a, b, &test);

	a = printf("st121 %*s\n", 100000, "hello");
	b = ft_printf("st121 %*s\n", 100000, "hello");
	rock_or_fail(a, b, &test);

	a = printf("st118 %*d\n", 100, 0);
	b = ft_printf("st118 %*d\n", 100, 0);
	rock_or_fail(a, b, &test);

	a = printf("st119 %*d\n", 1000, 10);
	b = ft_printf("st119 %*d\n", 1000, 10);
	rock_or_fail(a, b, &test);

	a = printf("st119 %*d\n", 1000, 10);
	b = ft_printf("st119 %*d\n", 1000, 10);
	rock_or_fail(a, b, &test);

	a = printf("st120 %*d\n", 10000, 467);
	b = ft_printf("st120 %*d\n", 10000, 467);
	rock_or_fail(a, b, &test);

	a = printf("st121 %*d\n", 100000, -589);
	b = ft_printf("st121 %*d\n", 100000, -589);
	rock_or_fail(a, b, &test);

	a = printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	b = ft_printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	rock_or_fail(a, b, &test);

	a = printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	b = ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	rock_or_fail(a, b, &test);

	a = printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
	b = ft_printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
	rock_or_fail(a, b, &test);

	a = printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	b = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	rock_or_fail(a, b, &test);

	
	a = printf("ultimate5 %*.*u\n", 1, 50, 5000);
	b = ft_printf("ultimate5 %*.*u\n", 1, 50, 5000);
	rock_or_fail(a, b, &test);

	a = printf("neg1 %*s\n", -9, "coucou");
	b = ft_printf("neg1 %*s\n", -9, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg2 %*.*s\n", -9, 4, "coucou");
	b = ft_printf("neg2 %*.*s\n", -9, 4, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg3 %*s\n", -9, NULL);
	b = ft_printf("neg3 %*s\n", -9, NULL);
	rock_or_fail(a, b, &test);

	a = printf("neg4 %*.*s\n", 0, 0, "coucou");
	b = ft_printf("neg4 %*.*s\n", 0, 0, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg5 %*s\n", -100, "coucou");
	b = ft_printf("neg5 %*s\n", -100, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg6 %*s\n", -156, "coucou");
	b = ft_printf("neg6 %*s\n", -156, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg7 %*.*s\n", -1586, 15, "coucou");
	b = ft_printf("neg7 %*.*s\n", -1586, 15, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg8 %*.*s\n", -1586, 15, "coucou");
	b = ft_printf("neg8 %*.*s\n", -1586, 15, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg9 %*.*s\n", 15856, 155, "coucou");
	b = ft_printf("neg9 %*.*s\n", 15856, 155, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg10 %*.*s\n", -15586, 15, "coucou");
	b = ft_printf("neg10 %*.*s\n", -15586, 15, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg11 %*.*s\n", -15586, 15, "coucou");
	b = ft_printf("neg11 %*.*s\n", -15586, 15, "coucou");
	rock_or_fail(a, b, &test);

	a = printf("neg1 %*d\n", -9, 150);
	b = ft_printf("neg1 %*d\n", -9, 150);
	rock_or_fail(a, b, &test);

	a = printf("neg2 %*.*d\n", -9, 4, 1555);
	b = ft_printf("neg2 %*.*d\n", -9, 4, 1555);
	rock_or_fail(a, b, &test);

	a = printf("neg3 %*d\n", -9, -255);
	b = ft_printf("neg3 %*d\n", -9, -255);
	rock_or_fail(a, b, &test);

	a = printf("neg4 %*.*d\n", 0, 0, -30);
	b = ft_printf("neg4 %*.*d\n", 0, 0, -30);
	rock_or_fail(a, b, &test);

	a = printf("neg5 %*d\n", -100, -589);
	b = ft_printf("neg5 %*d\n", -100, -589);
	rock_or_fail(a, b, &test);

	a = printf("neg6 %*d\n", -156, 15555);
	b = ft_printf("neg6 %*d\n", -156, 15555);
	rock_or_fail(a, b, &test);

	a = printf("neg7 %*.*d\n", -1586, 15, 0);
	b = ft_printf("neg7 %*.*d\n", -1586, 15, 0);
	rock_or_fail(a, b, &test);

	a = printf("neg8 %*.*d\n", -1586, 15, 300);
	b = ft_printf("neg8 %*.*d\n", -1586, 15, 300);
	rock_or_fail(a, b, &test);

	a = printf("neg9 %*.*d\n", 15856, 155, -3000);
	b = ft_printf("neg9 %*.*d\n", 15856, 155, -3000);
	rock_or_fail(a, b, &test);

	a = printf("neg10 %*.*d\n", -15586, 15, 150);
	b = ft_printf("neg10 %*.*d\n", -15586, 15, 150);
	rock_or_fail(a, b, &test);

	a = printf("neg11 %*.*d\n", -15586, 15, 0);
	b = ft_printf("neg11 %*.*d\n", -15586, 15, 0);
	rock_or_fail(a, b, &test);

	a = printf("***************%*s%*d**************%*u*************", 10, "coucou", 10, 10, -50, 20);
	b = ft_printf("***************%*s%*d**************%*u*************", 10, "coucou", 10, 10, -50, 20);
	rock_or_fail(a, b, &test);

	a = printf("taaa %100s\n", "hello");
	b = ft_printf("taaa %100s\n", "hello");
	rock_or_fail(a, b, &test);

	a = printf("taaa %c\n", -15);
	b = ft_printf("taaa %c\n", -15);
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                TEST char 0 rempla -11              \n");
printf("--------------------------------------------------\n"RESET);

	char strbla[3];
	strbla[0] = 'a';
	strbla[1] = -15;
	strbla[2] = '\0';

	a = printf("taaa %s\n", strbla);
	b = ft_printf("taaa %s\n", strbla);
	rock_or_fail(a, b, &test);

	a = printf("taaa (%c), [%c], <%c>\n", -15, -16, 0);
	b = ft_printf("taaa (%c), [%c], <%c>\n", -15, -16, 0);
	rock_or_fail(a, b, &test);

	a = printf("taaa (%c), [%c], <%c>\n", -15, -17, 0);
	b = ft_printf("taaa (%c), [%c], <%c>\n", -15, -17, 0);
	rock_or_fail(a, b, &test);


	a = printf("taaa (%c), [%c], <%c>, (%c)\n", -17, -15, -16, 0);
	b = ft_printf("taaa (%c), [%c], <%c>, (%c)\n", -17, -15, -16, 0);
	rock_or_fail(a, b, &test);

	a = printf("taaa (%c), [%c], <%c>\n", 0, -17, 0);
	b = ft_printf("taaa (%c), [%c], <%c>\n", 0, -17, 0);
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n--------------------------------------------------\n");
printf("                TEST Rturcey              \n");
printf("--------------------------------------------------\n"RESET);

	a = printf("%s|\n", NULL);
	b = ft_printf("%s|\n", NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%s\"|\n", "");
	b = ft_printf("\"%s\"|\n", "");
	rock_or_fail(a, b, &test);

	a = printf("%s|\n", "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%s|\n", "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	a = printf("%x|\n", INT_MIN);
	b = ft_printf("%x|\n", INT_MIN);
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n------------------------ 0* ---------------------\n"RESET);

	a = printf("%0*d|\n", 50,INT_MIN);
	b = ft_printf("%0*d|\n", 50,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*d|\n", 50,INT_MAX);
	b = ft_printf("%0*d|\n", 50,INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*d|\n", 50,0);
	b = ft_printf("%0*d|\n", 50,0);
	rock_or_fail(a, b, &test);

	a = printf("%0*i|\n", 50,INT_MIN);
	b = ft_printf("%0*i|\n", 50,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*i|\n", 50,INT_MAX);
	b = ft_printf("%0*i|\n", 50,INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*i|\n", 50,0);
	b = ft_printf("%0*i|\n", 50,0);
	rock_or_fail(a, b, &test);

	a = printf("%0*u|\n", 50,UINT_MAX);
	b = ft_printf("%0*u|\n", 50,UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*u|\n", 50,INT_MIN);
	b = ft_printf("%0*u|\n", 50,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*u|\n", 50,0);
	b = ft_printf("%0*u|\n", 50,0);
	rock_or_fail(a, b, &test);

	a = printf("%0*x|\n", 50,INT_MIN);
	b = ft_printf("%0*x|\n", 50,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*x|\n", 50,INT_MAX);
	b = ft_printf("%0*x|\n", 50,INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*x|\n", 50,1234567890);
	b = ft_printf("%0*x|\n", 50,1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%0*X|\n", 50,INT_MIN);
	b = ft_printf("%0*X|\n", 50,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*X|\n", 50,INT_MAX);
	b = ft_printf("%0*X|\n", 50,INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*X|\n", 50,1234567890);
	b = ft_printf("%0*X|\n", 50,1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%0*d|\n", 5,INT_MIN);
	b = ft_printf("%0*d|\n", 5,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*d|\n", 5,INT_MAX);
	b = ft_printf("%0*d|\n", 5,INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*d|\n", 5,0);
	b = ft_printf("%0*d|\n", 5,0);
	rock_or_fail(a, b, &test);

	a = printf("%0*i|\n", 5,INT_MIN);
	b = ft_printf("%0*i|\n", 5,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*i|\n", 5,INT_MAX);
	b = ft_printf("%0*i|\n", 5,INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*i|\n", 5,0);
	b = ft_printf("%0*i|\n", 5,0);
	rock_or_fail(a, b, &test);

	a = printf("%0*u|\n", 5,UINT_MAX);
	b = ft_printf("%0*u|\n", 5,UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*u|\n", 5,INT_MIN);
	b = ft_printf("%0*u|\n", 5,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*u|\n", 5,0);
	b = ft_printf("%0*u|\n", 5,0);
	rock_or_fail(a, b, &test);

	a = printf("%0*x|\n", 5,INT_MIN);
	b = ft_printf("%0*x|\n", 5,INT_MIN);
	rock_or_fail(a, b, &test);
	
	a = printf("%0*x|\n", 5,INT_MAX);
	b = ft_printf("%0*x|\n", 5,INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*x|\n", 5,1234567890);
	b = ft_printf("%0*x|\n", 5,1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%0*X|\n", 5,INT_MIN);
	b = ft_printf("%0*X|\n", 5,INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%0*X|\n", 5,INT_MAX);
	b = ft_printf("%0*X|\n", 5,INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%0*X|\n", 5,1234567890);
	b = ft_printf("%0*X|\n", 5,1234567890);
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n---------------------- -25 ------------------------\n"RESET);

	a = printf("%-25c|\n", 'a');
	b = ft_printf("%-25c|\n", 'a');
	rock_or_fail(a, b, &test);

	a = printf("%-25c|\n", 255);
	b = ft_printf("%-25c|\n", 255);
	rock_or_fail(a, b, &test);
	
	a = printf("%-25c|\n", '0');
	b = ft_printf("%-25c|\n", '0');
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n---------------------- -* ------------------------\n"RESET);

	a = printf("%-*d|\n", 50, INT_MIN);
	b = ft_printf("%-*d|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*d|\n", 50, INT_MAX);
	b = ft_printf("%-*d|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*d|\n", 50, 0);
	b = ft_printf("%-*d|\n", 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%-*i|\n", 50, INT_MIN);
	b = ft_printf("%-*i|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*i|\n", 50, INT_MAX);
	b = ft_printf("%-*i|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*i|\n", 50, 0);
	b = ft_printf("%-*i|\n", 50, 0);
	rock_or_fail(a, b, &test);
	
	a = printf("%-*u|\n", 50, UINT_MAX);
	b = ft_printf("%-*u|\n", 50, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*u|\n", 50, INT_MIN);
	b = ft_printf("%-*u|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*u|\n", 50, 0);
	b = ft_printf("%-*u|\n", 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%-*x|\n", 50, INT_MIN);
	b = ft_printf("%-*x|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*x|\n", 50, INT_MAX);
	b = ft_printf("%-*x|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*x|\n", 50, 1234567890);
	b = ft_printf("%-*x|\n", 50, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%-*X|\n", 50, INT_MIN);
	b = ft_printf("%-*X|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);
	
	a = printf("%-*X|\n", 50, INT_MAX);
	b = ft_printf("%-*X|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*X|\n", 50, 1234567890);
	b = ft_printf("%-*X|\n", 50, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%-*c|\n", 50, 'a');
	b = ft_printf("%-*c|\n", 50, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%-*c|\n", 50, 255);
	b = ft_printf("%-*c|\n", 50, 255);
	rock_or_fail(a, b, &test);

	a = printf("%-*c|\n", 50, '0');
	b = ft_printf("%-*c|\n", 50, '0');
	rock_or_fail(a, b, &test);

	a = printf("%-*s|\n", 50, NULL);
	b = ft_printf("%-*s|\n", 50, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%-*s\"|\n", 50, "");
	b = ft_printf("\"%-*s\"|\n", 50, "");
	rock_or_fail(a, b, &test);
	
	a = printf("%-*s|\n", 50, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%-*s|\n", 50, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	a = printf("%-*p|\n", 50, p1);
	b = ft_printf("%-*p|\n", 50, p1);
	rock_or_fail(a, b, &test);

	a = printf("%-*p|\n", 50, p2);
	b = ft_printf("%-*p|\n", 50, p2);
	rock_or_fail(a, b, &test);
	
	a = printf("%-*p|\n", 50, &p1);
	b = ft_printf("%-*p|\n", 50, &p1);
	rock_or_fail(a, b, &test);

	a = printf("%-*d|\n", 5, INT_MIN);
	b = ft_printf("%-*d|\n", 5, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*d|\n", 5, INT_MAX);
	b = ft_printf("%-*d|\n", 5, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*d|\n", 5, 0);
	b = ft_printf("%-*d|\n", 5, 0);
	rock_or_fail(a, b, &test);

	a = printf("%-*i|\n", 5, INT_MIN);
	b = ft_printf("%-*i|\n", 5, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*i|\n", 5, INT_MAX);
	b = ft_printf("%-*i|\n", 5, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*i|\n", 5, 0);
	b = ft_printf("%-*i|\n", 5, 0);
	rock_or_fail(a, b, &test);
	
	a = printf("%-*u|\n", 5, UINT_MAX);
	b = ft_printf("%-*u|\n", 5, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*u|\n", 5, INT_MIN);
	b = ft_printf("%-*u|\n", 5, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*u|\n", 5, 0);
	b = ft_printf("%-*u|\n", 5, 0);
	rock_or_fail(a, b, &test);
	
	a = printf("%-*x|\n", 5, INT_MIN);
	b = ft_printf("%-*x|\n", 5, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*x|\n", 5, INT_MAX);
	b = ft_printf("%-*x|\n", 5, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*x|\n", 5, 1234567890);
	b = ft_printf("%-*x|\n", 5, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%-*X|\n", 5, INT_MIN);
	b = ft_printf("%-*X|\n", 5, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-*X|\n", 5, INT_MAX);
	b = ft_printf("%-*X|\n", 5, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-*X|\n", 5, 1234567890);
	b = ft_printf("%-*X|\n", 5, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%-*c|\n", 5, 'a');
	b = ft_printf("%-*c|\n", 5, 'a'); 
	rock_or_fail(a, b, &test);
	
	a = printf("%-*c|\n", 5, 255);
	b = ft_printf("%-*c|\n", 5, 255);
	rock_or_fail(a, b, &test);

	a = printf("%-*c|\n", 5, '0');
	b = ft_printf("%-*c|\n", 5, '0');
	rock_or_fail(a, b, &test);

	a = printf("%-*s|\n", 5, NULL);
	b = ft_printf("%-*s|\n", 5, NULL);
	rock_or_fail(a, b, &test);
	
	a = printf("\"%-*s\"|\n", 5, "");
	b = ft_printf("\"%-*s\"|\n", 5, "");
	rock_or_fail(a, b, &test);

	a = printf("%-*s|\n", 5, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%-*s|\n", 5, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	a = printf("%-*p|\n", 5, p1);
	b = ft_printf("%-*p|\n", 5, p1);
	rock_or_fail(a, b, &test);

	a = printf("%-*p|\n", 5, p2);
	b = ft_printf("%-*p|\n", 5, p2);
	rock_or_fail(a, b, &test);

	a = printf("%-*p|\n", 5, &p1);
	b = ft_printf("%-*p|\n", 5, &p1);
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n-----------------------  -. -------------------------\n"RESET);

	a = printf("%-.d|\n", INT_MIN);
	b = ft_printf("%-.d|\n", INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-.d|\n", INT_MAX);
	b = ft_printf("%-.d|\n", INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%-.d|\n", 0);
	b = ft_printf("%-.d|\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%-.i|\n", INT_MIN);
	b = ft_printf("%-.i|\n", INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-.i|\n", INT_MAX);
	b = ft_printf("%-.i|\n", INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%-.i|\n", 0);
	b = ft_printf("%-.i|\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%-.u|\n", UINT_MAX);
	b = ft_printf("%-.u|\n", UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-.u|\n", INT_MIN);
	b = ft_printf("%-.u|\n", INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-.u|\n", 0);
	b = ft_printf("%-.u|\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%-.x|\n", INT_MIN);
	b = ft_printf("%-.x|\n", INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-.x|\n", INT_MAX);
	b = ft_printf("%-.x|\n", INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-.x|\n", 1234567890);
	b = ft_printf("%-.x|\n", 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%-.X|\n", INT_MIN);
	b = ft_printf("%-.X|\n", INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%-.X|\n", INT_MAX);
	b = ft_printf("%-.X|\n", INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%-.X|\n", 1234567890);
	b = ft_printf("%-.X|\n", 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%-.c|\n", 'a');
	b = ft_printf("%-.c|\n", 'a');
	rock_or_fail(a, b, &test);

	a = printf("%-.c|\n", 255);
	b = ft_printf("%-.c|\n", 255);
	rock_or_fail(a, b, &test);

	a = printf("%-.c|\n", '0');
	b = ft_printf("%-.c|\n", '0');
	rock_or_fail(a, b, &test);

	a = printf("%-.s|\n", NULL);
	b = ft_printf("%-.s|\n", NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%-.s\"|\n", "");
	b = ft_printf("\"%-.s\"|\n", "");
	rock_or_fail(a, b, &test);

	a = printf("%-.s|\n", "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%-.s|\n", "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	a = printf("%-.p|\n", p1);
	b = ft_printf("%-.p|\n", p1);
	rock_or_fail(a, b, &test);
	
	a = printf("%-.p|\n", p2);
	b = ft_printf("%-.p|\n", p2);
	rock_or_fail(a, b, &test);

	a = printf("%-.p|\n", &p1);
	b = ft_printf("%-.p|\n", &p1);
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n-----------------------  * 1 -------------------------\n"RESET);

	a = printf("%*d|\n", 1, INT_MIN);
	b = ft_printf("%*d|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*d|\n", 1, INT_MAX);
	b = ft_printf("%*d|\n", 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*d|\n", 1, 0);
	b = ft_printf("%*d|\n", 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*i|\n", 1, INT_MIN);
	b = ft_printf("%*i|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*i|\n", 1, INT_MAX);
	b = ft_printf("%*i|\n", 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*i|\n", 1, 0);
	b = ft_printf("%*i|\n", 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 1, UINT_MAX);
	b = ft_printf("%*u|\n", 1, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 1, INT_MIN);
	b = ft_printf("%*u|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 1, 0);
	b = ft_printf("%*u|\n", 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 1, INT_MIN);
	b = ft_printf("%*x|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 1, INT_MAX);
	b = ft_printf("%*x|\n", 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 1, 1234567890);
	b = ft_printf("%*x|\n", 1, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*X|\n", 1, INT_MIN);
	b = ft_printf("%*X|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*X|\n", 1, INT_MAX);
	b = ft_printf("%*X|\n", 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*X|\n", 1, 1234567890);
	b = ft_printf("%*X|\n", 1, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*c|\n", 1, 'a');
	b = ft_printf("%*c|\n", 1, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*c|\n", 1, 255);
	b = ft_printf("%*c|\n", 1, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*c|\n", 1, '0');
	b = ft_printf("%*c|\n", 1, '0');
	rock_or_fail(a, b, &test);

	a = printf("%*s|\n", 1, NULL);
	b = ft_printf("%*s|\n", 1, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*s\"|\n", 1, "");
	b = ft_printf("\"%*s\"|\n", 1, "");
	rock_or_fail(a, b, &test);

	a = printf("%*s|\n", 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*s|\n", 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	a = printf("%*p|\n", 1, p1);
	b = ft_printf("%*p|\n", 1, p1);
	rock_or_fail(a, b, &test);
	
	a = printf("%*p|\n", 1, p2);
	b = ft_printf("%*p|\n", 1, p2);
	rock_or_fail(a, b, &test);

	a = printf("%*p|\n", 1, &p1);
	b = ft_printf("%*p|\n", 1, &p1);
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n-----------------------  * 0 -------------------------\n"RESET);

	a = printf("%*d|\n", 0, INT_MIN);
	b = ft_printf("%*d|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*d|\n", 0, INT_MAX);
	b = ft_printf("%*d|\n", 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*d|\n", 0, 0);
	b = ft_printf("%*d|\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*i|\n", 0, INT_MIN);
	b = ft_printf("%*i|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*i|\n", 0, INT_MAX);
	b = ft_printf("%*i|\n", 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*i|\n", 0, 0);
	b = ft_printf("%*i|\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 0, UINT_MAX);
	b = ft_printf("%*u|\n", 0, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 0, INT_MIN);
	b = ft_printf("%*u|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 0, 0);
	b = ft_printf("%*u|\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 0, INT_MIN);
	b = ft_printf("%*x|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 0, INT_MAX);
	b = ft_printf("%*x|\n", 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 0, 1234567890);
	b = ft_printf("%*x|\n", 0, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*X|\n", 0, INT_MIN);
	b = ft_printf("%*X|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*X|\n", 0, INT_MAX);
	b = ft_printf("%*X|\n", 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*X|\n", 0, 1234567890);
	b = ft_printf("%*X|\n", 0, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*c|\n", 0, 'a');
	b = ft_printf("%*c|\n", 0, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*c|\n", 0, 255);
	b = ft_printf("%*c|\n", 0, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*c|\n", 0, '0');
	b = ft_printf("%*c|\n", 0, '0');
	rock_or_fail(a, b, &test);

	a = printf("%*s|\n", 0, NULL);
	b = ft_printf("%*s|\n", 0, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*s\"|\n", 0, "");
	b = ft_printf("\"%*s\"|\n", 0, "");
	rock_or_fail(a, b, &test);

	a = printf("%*s|\n", 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*s|\n", 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	a = printf("%*p|\n", 0, p1);
	b = ft_printf("%*p|\n", 0, p1);
	rock_or_fail(a, b, &test);
	
	a = printf("%*p|\n", 0, p2);
	b = ft_printf("%*p|\n", 0, p2);
	rock_or_fail(a, b, &test);

	a = printf("%*p|\n", 0, &p1);
	b = ft_printf("%*p|\n", 0, &p1);
	rock_or_fail(a, b, &test);

	printf(CYAN"\n\n\n-----------------------  * 50 -------------------------\n"RESET);

	a = printf("%*d|\n", 50, INT_MIN);
	b = ft_printf("%*d|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*d|\n", 50, INT_MAX);
	b = ft_printf("%*d|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*d|\n", 50, 0);
	b = ft_printf("%*d|\n", 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*i|\n", 50, INT_MIN);
	b = ft_printf("%*i|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*i|\n", 50, INT_MAX);
	b = ft_printf("%*i|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*i|\n", 50, 0);
	b = ft_printf("%*i|\n", 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 50, UINT_MAX);
	b = ft_printf("%*u|\n", 50, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 50, INT_MIN);
	b = ft_printf("%*u|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*u|\n", 50, 0);
	b = ft_printf("%*u|\n", 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 50, INT_MIN);
	b = ft_printf("%*x|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 50, INT_MAX);
	b = ft_printf("%*x|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*x|\n", 50, 1234567890);
	b = ft_printf("%*x|\n", 50, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*X|\n", 50, INT_MIN);
	b = ft_printf("%*X|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*X|\n", 50, INT_MAX);
	b = ft_printf("%*X|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*X|\n", 50, 1234567890);
	b = ft_printf("%*X|\n", 50, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*c|\n", 50, 'a');
	b = ft_printf("%*c|\n", 50, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*c|\n", 50, 255);
	b = ft_printf("%*c|\n", 50, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*c|\n", 50, '0');
	b = ft_printf("%*c|\n", 50, '0');
	rock_or_fail(a, b, &test);

	a = printf("%*s|\n", 50, NULL);
	b = ft_printf("%*s|\n", 50, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*s\"|\n", 50, "");
	b = ft_printf("\"%*s\"|\n", 50, "");
	rock_or_fail(a, b, &test);

	a = printf("%*s|\n", 50, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*s|\n", 50, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	a = printf("%*p|\n", 50, p1);
	b = ft_printf("%*p|\n", 50, p1);
	rock_or_fail(a, b, &test);
	
	a = printf("%*p|\n", 50, p2);
	b = ft_printf("%*p|\n", 50, p2);
	rock_or_fail(a, b, &test);

	a = printf("%*p|\n", 50, &p1);
	b = ft_printf("%*p|\n", 50, &p1);
	rock_or_fail(a, b, &test);

	printf(CYAN"\n\n\n-----------------------  .* 1 -------------------------\n"RESET);

	a = printf("%.*d|\n", 1, INT_MIN);
	b = ft_printf("%.*d|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*d|\n", 1, INT_MAX);
	b = ft_printf("%.*d|\n", 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*d|\n", 1, 0);
	b = ft_printf("%.*d|\n", 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*i|\n", 1, INT_MIN);
	b = ft_printf("%.*i|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*i|\n", 1, INT_MAX);
	b = ft_printf("%.*i|\n", 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*i|\n", 1, 0);
	b = ft_printf("%.*i|\n", 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 1, UINT_MAX);
	b = ft_printf("%.*u|\n", 1, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 1, INT_MIN);
	b = ft_printf("%.*u|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 1, 0);
	b = ft_printf("%.*u|\n", 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 1, INT_MIN);
	b = ft_printf("%.*x|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 1, INT_MAX);
	b = ft_printf("%.*x|\n", 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 1, 1234567890);
	b = ft_printf("%.*x|\n", 1, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*X|\n", 1, INT_MIN);
	b = ft_printf("%.*X|\n", 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*X|\n", 1, INT_MAX);
	b = ft_printf("%.*X|\n", 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*X|\n", 1, 1234567890);
	b = ft_printf("%.*X|\n", 1, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%.*s|\n", 1, NULL);
	b = ft_printf("%.*s|\n", 1, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%.*s\"|\n", 1, "");
	b = ft_printf("\"%.*s\"|\n", 1, "");
	rock_or_fail(a, b, &test);

	a = printf("%.*s|\n", 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%.*s|\n", 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	printf(CYAN"\n\n\n-----------------------  .* 0 -------------------------\n"RESET);

	a = printf("%.*d|\n", 0, INT_MIN);
	b = ft_printf("%.*d|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*d|\n", 0, INT_MAX);
	b = ft_printf("%.*d|\n", 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*d|\n", 0, 0);
	b = ft_printf("%.*d|\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*i|\n", 0, INT_MIN);
	b = ft_printf("%.*i|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*i|\n", 0, INT_MAX);
	b = ft_printf("%.*i|\n", 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*i|\n", 0, 0);
	b = ft_printf("%.*i|\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 0, UINT_MAX);
	b = ft_printf("%.*u|\n", 0, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 0, INT_MIN);
	b = ft_printf("%.*u|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 0, 0);
	b = ft_printf("%.*u|\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 0, INT_MIN);
	b = ft_printf("%.*x|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 0, INT_MAX);
	b = ft_printf("%.*x|\n", 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 0, 1234567890);
	b = ft_printf("%.*x|\n", 0, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*X|\n", 0, INT_MIN);
	b = ft_printf("%.*X|\n", 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*X|\n", 0, INT_MAX);
	b = ft_printf("%.*X|\n", 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*X|\n", 0, 1234567890);
	b = ft_printf("%.*X|\n", 0, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%.*s|\n", 0, NULL);
	b = ft_printf("%.*s|\n", 0, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%.*s\"|\n", 0, "");
	b = ft_printf("\"%.*s\"|\n", 0, "");
	rock_or_fail(a, b, &test);

	a = printf("%.*s|\n", 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%.*s|\n", 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

		printf(CYAN"\n\n\n-----------------------  .* 50 -------------------------\n"RESET);

	a = printf("%.*d|\n", 50, INT_MIN);
	b = ft_printf("%.*d|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*d|\n", 50, INT_MAX);
	b = ft_printf("%.*d|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*d|\n", 50, 0);
	b = ft_printf("%.*d|\n", 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*i|\n", 50, INT_MIN);
	b = ft_printf("%.*i|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*i|\n", 50, INT_MAX);
	b = ft_printf("%.*i|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*i|\n", 50, 0);
	b = ft_printf("%.*i|\n", 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 50, UINT_MAX);
	b = ft_printf("%.*u|\n", 50, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 50, INT_MIN);
	b = ft_printf("%.*u|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*u|\n", 50, 0);
	b = ft_printf("%.*u|\n", 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 50, INT_MIN);
	b = ft_printf("%.*x|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 50, INT_MAX);
	b = ft_printf("%.*x|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*x|\n", 50, 1234567890);
	b = ft_printf("%.*x|\n", 50, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%.*X|\n", 50, INT_MIN);
	b = ft_printf("%.*X|\n", 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%.*X|\n", 50, INT_MAX);
	b = ft_printf("%.*X|\n", 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%.*X|\n", 50, 1234567890);
	b = ft_printf("%.*X|\n", 50, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%.*s|\n", 50, NULL);
	b = ft_printf("%.*s|\n", 50, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%.*s\"|\n", 50, "");
	b = ft_printf("\"%.*s\"|\n", 50, "");
	rock_or_fail(a, b, &test);

	a = printf("%.*s|\n", 50, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%.*s|\n", 50, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

		printf(CYAN"\n\n\n-----------------------  1.1 -------------------------\n"RESET);

	a = printf("%*.*d|\n", 1, 1, INT_MIN);
	b = ft_printf("%*.*d|\n", 1, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*d|\n", 1, 1, INT_MAX);
	b = ft_printf("%*.*d|\n", 1, 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*d|\n", 1, 1, 0);
	b = ft_printf("%*.*d|\n", 1, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 1, 1, INT_MIN);
	b = ft_printf("%*.*i|\n", 1, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 1, 1, INT_MAX);
	b = ft_printf("%*.*i|\n", 1, 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*i|\n", 1, 1, 0);
	b = ft_printf("%*.*i|\n", 1, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 1, 1, UINT_MAX);
	b = ft_printf("%*.*u|\n", 1, 1, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 1, 1, INT_MIN);
	b = ft_printf("%*.*u|\n", 1, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 1, 1, 0);
	b = ft_printf("%*.*u|\n", 1, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 1, 1, INT_MIN);
	b = ft_printf("%*.*x|\n", 1, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 1, 1, INT_MAX);
	b = ft_printf("%*.*x|\n", 1, 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 1, 1, 1234567890);
	b = ft_printf("%*.*x|\n", 1, 1, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*X|\n", 1, 1, INT_MIN);
	b = ft_printf("%*.*X|\n", 1, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 1, 1, INT_MAX);
	b = ft_printf("%*.*X|\n", 1, 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 1, 1, 1234567890);
	b = ft_printf("%*.*X|\n", 1, 1, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 1, 1, NULL);
	b = ft_printf("%*.*s|\n", 1, 1, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*.*s\"|\n", 1, 1, "");
	b = ft_printf("\"%*.*s\"|\n", 1, 1, "");
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 1, 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*.*s|\n", 1, 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

			printf(CYAN"\n\n\n-----------------------  0.0 -------------------------\n"RESET);

	a = printf("%*.*d|\n", 0, 0, INT_MIN);
	b = ft_printf("%*.*d|\n", 0, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*d|\n", 0, 0, INT_MAX);
	b = ft_printf("%*.*d|\n", 0, 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*d|\n", 0, 0, 0);
	b = ft_printf("%*.*d|\n", 0, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 0, 0, INT_MIN);
	b = ft_printf("%*.*i|\n", 0, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 0, 0, INT_MAX);
	b = ft_printf("%*.*i|\n", 0, 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*i|\n", 0, 0, 0);
	b = ft_printf("%*.*i|\n", 0, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 0, 0, UINT_MAX);
	b = ft_printf("%*.*u|\n", 0, 0, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 0, 0, INT_MIN);
	b = ft_printf("%*.*u|\n", 0, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 0, 0, 0);
	b = ft_printf("%*.*u|\n", 0, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 0, 0, INT_MIN);
	b = ft_printf("%*.*x|\n", 0, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 0, 0, INT_MAX);
	b = ft_printf("%*.*x|\n", 0, 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 0, 0, 1234567890);
	b = ft_printf("%*.*x|\n", 0, 0, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*X|\n", 0, 0, INT_MIN);
	b = ft_printf("%*.*X|\n", 0, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 0, 0, INT_MAX);
	b = ft_printf("%*.*X|\n", 0, 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 0, 0, 1234567890);
	b = ft_printf("%*.*X|\n", 0, 0, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 0, 0, NULL);
	b = ft_printf("%*.*s|\n", 0, 0, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*.*s\"|\n", 0, 0, "");
	b = ft_printf("\"%*.*s\"|\n", 0, 0, "");
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 0, 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*.*s|\n", 0, 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

				printf(CYAN"\n\n\n-----------------------  50.50 -------------------------\n"RESET);

	a = printf("%*.*d|\n", 50, 50, INT_MIN);
	b = ft_printf("%*.*d|\n", 50, 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*d|\n", 50, 50, INT_MAX);
	b = ft_printf("%*.*d|\n", 50, 50, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*d|\n", 50, 50, 0);
	b = ft_printf("%*.*d|\n", 50, 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 50, 50, INT_MIN);
	b = ft_printf("%*.*i|\n", 50, 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 50, 50, INT_MAX);
	b = ft_printf("%*.*i|\n", 50, 50, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*i|\n", 50, 50, 0);
	b = ft_printf("%*.*i|\n", 50, 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 50, UINT_MAX);
	b = ft_printf("%*.*u|\n", 50, 50, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 50, INT_MIN);
	b = ft_printf("%*.*u|\n", 50, 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 50, 0);
	b = ft_printf("%*.*u|\n", 50, 50, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 50, INT_MIN);
	b = ft_printf("%*.*x|\n", 50, 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 50, INT_MAX);
	b = ft_printf("%*.*x|\n", 50, 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 50, 1234567890);
	b = ft_printf("%*.*x|\n", 50, 50, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*X|\n", 50, 50, INT_MIN);
	b = ft_printf("%*.*X|\n", 50, 50, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 50, 50, INT_MAX);
	b = ft_printf("%*.*X|\n", 50, 50, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 50, 50, 1234567890);
	b = ft_printf("%*.*X|\n", 50, 50, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 50, 50, NULL);
	b = ft_printf("%*.*s|\n", 50, 50, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*.*s\"|\n", 50, 50, "");
	b = ft_printf("\"%*.*s\"|\n", 50, 50, "");
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 50, 50, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*.*s|\n", 50, 50, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);


printf(CYAN"\n\n\n-----------------------  0.1 -------------------------\n"RESET);

	a = printf("%*.*d|\n", 0, 1, INT_MIN);
	b = ft_printf("%*.*d|\n", 0, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*d|\n", 0, 1, INT_MAX);
	b = ft_printf("%*.*d|\n", 0, 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*d|\n", 0, 1, 0);
	b = ft_printf("%*.*d|\n", 0, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 0, 1, INT_MIN);
	b = ft_printf("%*.*i|\n", 0, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 0, 1, INT_MAX);
	b = ft_printf("%*.*i|\n", 0, 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*i|\n", 0, 1, 0);
	b = ft_printf("%*.*i|\n", 0, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 0, 1, UINT_MAX);
	b = ft_printf("%*.*u|\n", 0, 1, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 0, 1, INT_MIN);
	b = ft_printf("%*.*u|\n", 0, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 0, 1, 0);
	b = ft_printf("%*.*u|\n", 0, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 0, 1, INT_MIN);
	b = ft_printf("%*.*x|\n", 0, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 0, 1, INT_MAX);
	b = ft_printf("%*.*x|\n", 0, 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 0, 1, 1234567890);
	b = ft_printf("%*.*x|\n", 0, 1, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*X|\n", 0, 1, INT_MIN);
	b = ft_printf("%*.*X|\n", 0, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 0, 1, INT_MAX);
	b = ft_printf("%*.*X|\n", 0, 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 0, 1, 1234567890);
	b = ft_printf("%*.*X|\n", 0, 1, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 0, 1, NULL);
	b = ft_printf("%*.*s|\n", 0, 1, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*.*s\"|\n", 0, 1, "");
	b = ft_printf("\"%*.*s\"|\n", 0, 1, "");
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 0, 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*.*s|\n", 0, 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n-----------------------  50.1 -------------------------\n"RESET);

	a = printf("%*.*d|\n", 50, 1, INT_MIN);
	b = ft_printf("%*.*d|\n", 50, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*d|\n", 50, 1, INT_MAX);
	b = ft_printf("%*.*d|\n", 50, 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*d|\n", 50, 1, 0);
	b = ft_printf("%*.*d|\n", 50, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 50, 1, INT_MIN);
	b = ft_printf("%*.*i|\n", 50, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 50, 1, INT_MAX);
	b = ft_printf("%*.*i|\n", 50, 1, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*i|\n", 50, 1, 0);
	b = ft_printf("%*.*i|\n", 50, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 1, UINT_MAX);
	b = ft_printf("%*.*u|\n", 50, 1, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 1, INT_MIN);
	b = ft_printf("%*.*u|\n", 50, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 1, 0);
	b = ft_printf("%*.*u|\n", 50, 1, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 1, INT_MIN);
	b = ft_printf("%*.*x|\n", 50, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 1, INT_MAX);
	b = ft_printf("%*.*x|\n", 50, 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 1, 1234567890);
	b = ft_printf("%*.*x|\n", 50, 1, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*X|\n", 50, 1, INT_MIN);
	b = ft_printf("%*.*X|\n", 50, 1, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 50, 1, INT_MAX);
	b = ft_printf("%*.*X|\n", 50, 1, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 50, 1, 1234567890);
	b = ft_printf("%*.*X|\n", 50, 1, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 50, 1, NULL);
	b = ft_printf("%*.*s|\n", 50, 1, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*.*s\"|\n", 50, 1, "");
	b = ft_printf("\"%*.*s\"|\n", 50, 1, "");
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 50, 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*.*s|\n", 50, 1, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

printf(CYAN"\n\n\n-----------------------  1.0 -------------------------\n"RESET);

	a = printf("%*.*d|\n", 1, 0, INT_MIN);
	b = ft_printf("%*.*d|\n", 1, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*d|\n", 1, 0, INT_MAX);
	b = ft_printf("%*.*d|\n", 1, 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*d|\n", 1, 0, 0);
	b = ft_printf("%*.*d|\n", 1, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 1, 0, INT_MIN);
	b = ft_printf("%*.*i|\n", 1, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 1, 0, INT_MAX);
	b = ft_printf("%*.*i|\n", 1, 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*i|\n", 1, 0, 0);
	b = ft_printf("%*.*i|\n", 1, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 1, 0, UINT_MAX);
	b = ft_printf("%*.*u|\n", 1, 0, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 1, 0, INT_MIN);
	b = ft_printf("%*.*u|\n", 1, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 1, 0, 0);
	b = ft_printf("%*.*u|\n", 1, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 1, 0, INT_MIN);
	b = ft_printf("%*.*x|\n", 1, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 1, 0, INT_MAX);
	b = ft_printf("%*.*x|\n", 1, 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 1, 0, 1234567890);
	b = ft_printf("%*.*x|\n", 1, 0, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*X|\n", 1, 0, INT_MIN);
	b = ft_printf("%*.*X|\n", 1, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 1, 0, INT_MAX);
	b = ft_printf("%*.*X|\n", 1, 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 1, 0, 1234567890);
	b = ft_printf("%*.*X|\n", 1, 0, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 1, 0, NULL);
	b = ft_printf("%*.*s|\n", 1, 0, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*.*s\"|\n", 1, 0, "");
	b = ft_printf("\"%*.*s\"|\n", 1, 0, "");
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 1, 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*.*s|\n", 1, 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);

	printf(CYAN"\n\n\n-----------------------  1.0 -------------------------\n"RESET);

	a = printf("%*.*d|\n", 50, 0, INT_MIN);
	b = ft_printf("%*.*d|\n", 50, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*d|\n", 50, 0, INT_MAX);
	b = ft_printf("%*.*d|\n", 50, 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*d|\n", 50, 0, 0);
	b = ft_printf("%*.*d|\n", 50, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 50, 0, INT_MIN);
	b = ft_printf("%*.*i|\n", 50, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*i|\n", 50, 0, INT_MAX);
	b = ft_printf("%*.*i|\n", 50, 0, INT_MAX);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*i|\n", 50, 0, 0);
	b = ft_printf("%*.*i|\n", 50, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 0, UINT_MAX);
	b = ft_printf("%*.*u|\n", 50, 0, UINT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 0, INT_MIN);
	b = ft_printf("%*.*u|\n", 50, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*u|\n", 50, 0, 0);
	b = ft_printf("%*.*u|\n", 50, 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 0, INT_MIN);
	b = ft_printf("%*.*x|\n", 50, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 0, INT_MAX);
	b = ft_printf("%*.*x|\n", 50, 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*x|\n", 50, 0, 1234567890);
	b = ft_printf("%*.*x|\n", 50, 0, 1234567890);
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*X|\n", 50, 0, INT_MIN);
	b = ft_printf("%*.*X|\n", 50, 0, INT_MIN);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 50, 0, INT_MAX);
	b = ft_printf("%*.*X|\n", 50, 0, INT_MAX);
	rock_or_fail(a, b, &test);

	a = printf("%*.*X|\n", 50, 0, 1234567890);
	b = ft_printf("%*.*X|\n", 50, 0, 1234567890);
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 50, 0, NULL);
	b = ft_printf("%*.*s|\n", 50, 0, NULL);
	rock_or_fail(a, b, &test);

	a = printf("\"%*.*s\"|\n", 50, 0, "");
	b = ft_printf("\"%*.*s\"|\n", 50, 0, "");
	rock_or_fail(a, b, &test);

	a = printf("%*.*s|\n", 50, 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	b = ft_printf("%*.*s|\n", 50, 0, "abcdef\200ijklmnopq\32rstuvwxyz\t123456789 \0 abcdef");
	rock_or_fail(a, b, &test);


	printf(CYAN"\n\n\n-----------------------  MISC -------------------------\n"RESET);

	a = printf("%-9.5x|\n", 42);
	b = ft_printf("%-9.5x|\n", 42);
	rock_or_fail(a, b, &test);

	a = printf("%09.5x|\n", 42);
	b = ft_printf("%09.5x|\n", 42);
	rock_or_fail(a, b, &test);

	a = printf("%09.3x|\n", 42);
	b = ft_printf("%09.3x|\n", 42);
	rock_or_fail(a, b, &test);

	a = printf("%09.2x|\n", 42);
	b = ft_printf("%09.2x|\n", 42);
	rock_or_fail(a, b, &test);

	a = printf("%-10.5x|, |%-10.5x|", 0, 0);
	b = ft_printf("%-10.5x|, |%-10.5x|", 0, 0);
	rock_or_fail(a, b, &test);
	
	a = printf("%05.2u|\n", (unsigned int)42);
	b = ft_printf("%05.2u|\n", (unsigned int)42);
	rock_or_fail(a, b, &test);

	a = printf("%09.5u|\n", (unsigned int)42);
	b = ft_printf("%09.5u|\n", (unsigned int)42);
	rock_or_fail(a, b, &test);

	a = printf("%-9.5u|\n", (unsigned int)42);
	b = ft_printf("%-9.5u|\n", (unsigned int)42);
	rock_or_fail(a, b, &test);

	a = printf("%-5.9u|\n", (unsigned int)42);
	b = ft_printf("%-5.9u|\n", (unsigned int)42);
	rock_or_fail(a, b, &test);

	a = printf("%05.1d|\n", 42);
	b = ft_printf("%05.1d|\n", 42);
	rock_or_fail(a, b, &test);

	a = printf("%09.5d|\n", 42);
	b = ft_printf("%09.5d|\n", 42);
	rock_or_fail(a, b, &test);

	a = printf("%09.*d|\n", 42, -3);
	b = ft_printf("%09.*d|\n", 42, -3);
	rock_or_fail(a, b, &test);

	a = printf("%09.2d|\n", 42);
	b = ft_printf("%09.2d|\n", 42);
	rock_or_fail(a, b, &test);
	
	a = printf("%-.5d|\n", 42);
	b = ft_printf("%-.5d|\n", 42);
	rock_or_fail(a, b, &test);

	a = printf("%15.4d|\n", -42);
	b = ft_printf("%15.4d|\n", -42);
	rock_or_fail(a, b, &test);

	a = printf("%05.1d|\n", 0);
	b = ft_printf("%05.1d|\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%03.2d|\n", -1);
	b = ft_printf("%03.2d|\n", -1);
	rock_or_fail(a, b, &test);

	a = printf("%%\n");
	b = ft_printf("%%\n");
	rock_or_fail(a, b, &test);

	a = printf("%05.*d|\n", -15, 42);
	b = ft_printf("%05.*d|\n", -15, 42);
	rock_or_fail(a, b, &test);

	a = printf("%-12.1s|\n", "salut");
	b = ft_printf("%-12.1s|\n", "salut");
	rock_or_fail(a, b, &test);

	a = printf("""");
	printf("after empty printf\n");
	b = ft_printf("""");
	//printf("after empty ft_printf\n");
	rock_or_fail(a, b, &test);

	a = printf("%.2s%.7s", "hello", "world");
	b = ft_printf("%.2s%.7s", "hello", "world");
	rock_or_fail(a, b, &test);

	a = printf("%7.3s%7.7s", "hello", "world");
	b = ft_printf("%7.3s%7.7s", "hello", "world");
	rock_or_fail(a, b, &test);

	a = printf("%3.3s%7.7s", "hello", "world");
	b = ft_printf("%3.3s%7.7s", "hello", "world");
	rock_or_fail(a, b, &test);

	a = printf("%7.3s%3.7s", "hello", "world");
	b = ft_printf("%7.3s%3.7s", "hello", "world");
	rock_or_fail(a, b, &test);

	a = printf("%%");
	b = ft_printf("%%");
	rock_or_fail(a, b, &test);

	a = printf("%.s\n", "hello");
	b = ft_printf("%.s\n", "hello");
	rock_or_fail(a, b, &test);

	a = printf("%.s\n", "NULL");
	b = ft_printf("%.s\n", "NULL");
	rock_or_fail(a, b, &test);
	
char *stt = "blbl\0akakakakakakak\0";

	a = printf("%.s\n", stt);
	b = ft_printf("%.s\n", stt);
	rock_or_fail(a, b, &test);

	a = printf("%s%d%p%%%i%u%x%X%c\n","bonjour", 42, &c, 42, 42, 42, 42, 'c');
	b = ft_printf("%s%d%p%%%i%u%x%X%c\n","bonjour", 42, &c, 42, 42, 42, 42, 'c');
	rock_or_fail(a, b, &test);

	a = printf("\"%c\n", 0);
	b = ft_printf("\"%c\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%*c|\n", 0, 0);
	b = ft_printf("%*c|\n", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%*c%%\"\n", -15, '\0');
	b = ft_printf("%*c%%\"\n", -15, '\0');
	rock_or_fail(a, b, &test);

	a = printf("%*c%%\"\n", 15, '\0');
	b = ft_printf("%*c%%\"\n", 15, '\0');
	rock_or_fail(a, b, &test);

	a = printf("{%3c}\n", 0);
	b = ft_printf("{%3c}\n", 0);
	rock_or_fail(a, b, &test);

	a = printf("%.3s%.2s", "bring", "kitty");
	b = ft_printf("%.3s%.2s", "bring", "kitty");
	rock_or_fail(a, b, &test);


printf("DON'T GO WITH -W GCC FLAGS, RUN WITHOUT JUST TO CHECK SEGFAULTS\n");
	
/*
	a = printf("[%.1c]", c);
	b = ft_printf("[%.1c]", c);
	rock_or_fail(a, b, &test);

	a = printf("[%.1p]", &str);
	b = ft_printf("[%.1p]", &str);
	rock_or_fail(a, b, &test);


	a = printf("[%000*c]", vitamineb, c);
	b = ft_printf("[%000*c]", vitamineb, c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*s]", vitamineb, str);
	b = ft_printf("[%000*s]", vitamineb, str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%000*p]", vitamineb, &str);
	b = ft_printf("[%000*p]", vitamineb, &str);
	rock_or_fail(a, b, &test);

	a = printf("3caractere 1 %   c caractere 2 % c\n\n", 'a', 'c');
	b = ft_printf("3caractere 1 %   c caractere 2 % c\n\n", 'a', 'c');
	rock_or_fail(a, b, &test);

	a = printf("3caractere 1 %   c caractere 2 % c\n\n", 'a', 'c');
	b = ft_printf("3caractere 1 %   c caractere 2 % c\n\n", 'a', 'c');
	rock_or_fail(a, b, &test);

	a = printf("3hexa-maj 1 %   X hexa-maj 2 % X\n\n", 42, -42);
	b = ft_printf("3hexa-maj 1 %   X hexa-maj 2 % X\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("3pointeur 1 %   p pointeur 2 % p\n\n", &c, &c);
	b = ft_printf("3pointeur 1 %   p pointeur 2 % p\n\n", &c, &c);
	rock_or_fail(a, b, &test);

	a = printf("5pointeur 1 %0p pointeur 2 %0p\n\n", &c, &c);
	b = ft_printf("5pointeur 1 %0p pointeur 2 %0p\n\n", &c, &c);
	rock_or_fail(a, b, &test);

	a = printf("6pointeur 1 %012p pointeur 2 %012p\n\n", &c, &c);
	b = ft_printf("6pointeur 1 %012p pointeur 2 %012p\n\n", &c, &c);
	rock_or_fail(a, b, &test);

	a = printf("3unsigned 1 %   u unsigned 2 % u\n\n", 42, -42);
	b = ft_printf("3unsigned 1 %   u unsigned 2 % u\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("3unsigned 1 %   u unsigned 2 % u\n\n", 42, -42);
	b = ft_printf("3unsigned 1 %   u unsigned 2 % u\n\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("%s", 0);
	b = ft_printf("%s", 0);
	rock_or_fail(a, b, &test);

	a = printf("bonjour !\n", 42, -42);
	b = ft_printf("bonjour !\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("3string 1 %   s string 2 % s\n\n", "toto", "bonjour");
	b = ft_printf("3string 1 %   s string 2 % s\n\n", "toto", "bonjour");
	rock_or_fail(a, b, &test);

	a = printf("[%.*c]", vitamineb, c);
	b = ft_printf("[%.*c]", vitamineb, c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.*p]", vitamineb, &str);
	b = ft_printf("[%.*p]", vitamineb, &str);
	rock_or_fail(a, b, &test);

	a = printf("%010c\n", 't');
	b = ft_printf("%010c\n", 't');
	rock_or_fail(a, b, &test);

	a = printf("t6 %*3.*d\n", 50,  5, 10);
	b = ft_printf("t6 %*3.*d\n", 50,  5, 10);
	rock_or_fail(a, b, &test);

	a = printf("[%5.10c]", c);
	b = ft_printf("[%5.10c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%5.10p]", &str);
	b = ft_printf("[%5.10p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%0.10c]", c);
	b = ft_printf("[%0.10c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10s]", str);
	b = ft_printf("[%0.10s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%0.10p]", &str);
	b = ft_printf("[%0.10p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%-.05c]", c);
	b = ft_printf("[%-.05c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-.05p]", &str);
	b = ft_printf("[%-.05p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%-25.10c]", c);
	b = ft_printf("[%-25.10c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%-25.10p]", &str);
	b = ft_printf("[%-25.10p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%02.10c]", c);
	b = ft_printf("[%02.10c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10s]", str);
	b = ft_printf("[%02.10s]", str);
	rock_or_fail(a, b, &test);
	
	a = printf("[%02.10p]", &str);
	b = ft_printf("[%02.10p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%0*.*c]", waf, miaou, c);
	b = ft_printf("[%0*.*c]", waf, miaou, c);
	rock_or_fail(a, b, &test);
			
	a = printf("[%0*.*s]", waf, miaou, str);
	b = ft_printf("[%0*.*s]", waf, miaou, str);	
	rock_or_fail(a, b, &test);
			
	a = printf("[%0*.*p]", waf, miaou, &str);
	b = ft_printf("[%0*.*p]", waf, miaou, &str);
	rock_or_fail(a, b, &test);

	a = printf("%   i\n", -60);
	b = ft_printf("%   i\n", -60);
	rock_or_fail(a, b, &test);

	a = printf("%    i\n", -60);
	b = ft_printf("%    i\n", -60);
	rock_or_fail(a, b, &test);

	a = printf("2chiffre 1 %   d chiffre 2 % d\n", 42, -42);
	b = ft_printf("2chiffre 1 %   d chiffre 2 % d\n", 42, -42);
	rock_or_fail(a, b, &test);

	a = printf("Les bornes :  %x, %x\n", 0, 4294967295);
	b = ft_printf("Les bornes :  %x, %x\n", 0, 4294967295);
	rock_or_fail(a, b, &test);

	a = printf("Les bornes :  %u, %u\n", 0, 4294967295);
	b = ft_printf("Les bornes :  %u, %u\n", 0, 4294967295);
	rock_or_fail(a, b, &test);

	a = printf("Les bornes :  %d, %d\n", -2147483648, 2147483647);
	b = ft_printf("Les bornes :  %d, %d\n", -2147483648, 2147483647);
	rock_or_fail(a, b, &test);
	
	a = printf("5string 1 %0s string 2 %0s\n\n", "toto", "bonjour");
	b = ft_printf("5string 1 %0s string 2 %0s\n\n", "toto", "bonjour");
	rock_or_fail(a, b, &test);

	a = printf("6string 1 %012s string 2 %012s\n\n", "toto", "bonjour");
	b = ft_printf("6string 1 %012s string 2 %012s\n\n", "toto", "bonjour");
	rock_or_fail(a, b, &test);

	a = printf("6string 1 %012s string 2 %012s\n\n", "toto", "bonjour");
	b = ft_printf("6string 1 %012s string 2 %012s\n\n", "toto", "bonjour");
	rock_or_fail(a, b, &test);

	a = printf("7string 1 %-012s string 2 %012s\n\n", "toto", "bonjour");
	b = ft_printf("7string 1 %-012s string 2 %012s\n\n", "toto", "bonjour");
	rock_or_fail(a, b, &test);

	a = printf("%.*c|\n", 1, 'a');
	b = ft_printf("%.*c|\n", 1, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%.*c|\n", 1, 255);
	b = ft_printf("%.*c|\n", 1, 255);
	rock_or_fail(a, b, &test);

	a = printf("%.*c|\n", 1, '0');
	b = ft_printf("%.*c|\n", 1, '0');
	rock_or_fail(a, b, &test);

	a = printf("%.*c|\n", 0, 'a');
	b = ft_printf("%.*c|\n", 0, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%.*c|\n", 0, 255);
	b = ft_printf("%.*c|\n", 0, 255);
	rock_or_fail(a, b, &test);

	a = printf("%.*c|\n", 0, '0');
	b = ft_printf("%.*c|\n", 0, '0');
	rock_or_fail(a, b, &test);
	
	a = printf("%.*c|\n", 50, 'a');
	b = ft_printf("%.*c|\n", 50, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%.*c|\n", 50, 255);
	b = ft_printf("%.*c|\n", 50, 255);
	rock_or_fail(a, b, &test);

	a = printf("%.*c|\n", 50, '0');
	b = ft_printf("%.*c|\n", 50, '0');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 1, 1, 'a');
	b = ft_printf("%*.*c|\n", 1, 1, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 1, 1, 255);
	b = ft_printf("%*.*c|\n", 1, 1, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 1, 1, '0');
	b = ft_printf("%*.*c|\n", 1, 1, '0');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 0, 0, 'a');
	b = ft_printf("%*.*c|\n", 0, 0, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 0, 0, 255);
	b = ft_printf("%*.*c|\n", 0, 0, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 0, 0, '0');
	b = ft_printf("%*.*c|\n", 0, 0, '0');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 0, 1, 'a');
	b = ft_printf("%*.*c|\n", 0, 1, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 0, 1, 255);
	b = ft_printf("%*.*c|\n", 0, 1, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 0, 1, '0');
	b = ft_printf("%*.*c|\n", 0, 1, '0');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 50, 50, 'a');
	b = ft_printf("%*.*c|\n", 50, 50, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 50, 50, 255);
	b = ft_printf("%*.*c|\n", 50, 50, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 50, 50, '0');
	b = ft_printf("%*.*c|\n", 50, 50, '0');
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*c|\n", 50, 1, 'a');
	b = ft_printf("%*.*c|\n", 50, 1, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 50, 1, 255);
	b = ft_printf("%*.*c|\n", 50, 1, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 50, 1, '0');
	b = ft_printf("%*.*c|\n", 50, 1, '0');
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*c|\n", 50, 0, 'a');
	b = ft_printf("%*.*c|\n", 50, 0, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 50, 0, 255);
	b = ft_printf("%*.*c|\n", 50, 0, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 50, 0, '0');
	b = ft_printf("%*.*c|\n", 50, 0, '0');
	rock_or_fail(a, b, &test);
	
	a = printf("%*.*c|\n", 1, 0, 'a');
	b = ft_printf("%*.*c|\n", 1, 0, 'a');
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 1, 0, 255);
	b = ft_printf("%*.*c|\n", 1, 0, 255);
	rock_or_fail(a, b, &test);

	a = printf("%*.*c|\n", 1, 0, '0');
	b = ft_printf("%*.*c|\n", 1, 0, '0');
	rock_or_fail(a, b, &test);

	a = printf("[%.45c]", c);
	b = ft_printf("[%.45c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.45p]", &str);
	b = ft_printf("[%.45p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%.1c]", c);
	b = ft_printf("[%.1c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.1p]", &str);
	b = ft_printf("[%.1p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%.10c]", c);
	b = ft_printf("[%.10c]", c);
	rock_or_fail(a, b, &test);
	
	a = printf("[%.10p]", &str);
	b = ft_printf("[%.10p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%.0c]", c);
	b = ft_printf("[%.0c]", c);
	rock_or_fail(a, b, &test);

	a = printf("[%.0p]", &str);
	b = ft_printf("[%.0p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("[%0s]", str);
	b = ft_printf("[%0s]", str);
	rock_or_fail(a, b, &test);

	a = printf("[%0p]", &str);
	b = ft_printf("[%0p]", &str);
	rock_or_fail(a, b, &test);

	a = printf("%030p\n", p1);
	b = ft_printf("%030p\n", p1);
	rock_or_fail(a, b, &test);
	
	a = printf("%030p\n", &p1);
	b = ft_printf("%030p\n", &p1);
	rock_or_fail(a, b, &test);

	a = printf("%00p\n", p2);
	b = ft_printf("%00p\n", p2);
	rock_or_fail(a, b, &test);

	a = printf("%00p\n", &p2);
	b = ft_printf("%00p\n", &p2);
	rock_or_fail(a, b, &test);

	a = printf("%-9.5x|\n%09.5x|\n%09.3x|\n%09.2x|\n%-10.5x|, |%-10.5x|%05.2u|\n%09.5u|\n%-9.5u|\n%-5.9u|\n %05.1d|\n%09.5d|\n%09.3d|\n%09.2d|\n%-.5d|\n%15.4d|\n%05.1d|\n%03.2d|\n%%\n%05.*d|\n%-12.1s|\n %030p\n%030p\n%00p\n%00p\n", 42, 42, 42, 42, 0, 0, (unsigned int)42, (unsigned int)42, (unsigned int)42, (unsigned int)42, 42, 42, 42, 42, 42, -42, 0, -1, -15, 42, "salut", p1, &p1, p2, &p2);
	b = ft_printf("%-9.5x|\n%09.5x|\n%09.3x|\n%09.2x|\n%-10.5x|, |%-10.5x|%05.2u|\n%09.5u|\n%-9.5u|\n%-5.9u|\n %05.1d|\n%09.5d|\n%09.3d|\n%09.2d|\n%-.5d|\n%15.4d|\n%05.1d|\n%03.2d|\n%%\n%05.*d|\n%-12.1s|\n %030p\n%030p\n%00p\n%00p\n", 42, 42, 42, 42, 0, 0, (unsigned int)42, (unsigned int)42, (unsigned int)42, (unsigned int)42, 42, 42, 42, 42, 42, -42, 0, -1, -15, 42, "salut", p1, &p1, p2, &p2);
	rock_or_fail(a, b, &test);

	a = printf("%2.9p", 1234567);
	b = ft_printf("%2.9p", 1234567);
	rock_or_fail(a, b, &test);

	a = printf("%.p, %.0p", 0, 0);
	b = ft_printf("%.p, %.0p", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("{%*3d}", 5, 0);
	b = ft_printf("{%*3d}", 5, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.0p, %.p", 0, 0);
	b = ft_printf("%.0p, %.p", 0, 0);
	rock_or_fail(a, b, &test);

	a = printf("%.0p", 0);
	b = ft_printf("%.0p", 0);
	rock_or_fail(a, b, &test);


	a = printf("%09s\n", stt);
	b = ft_printf("%09s\n", stt);
	rock_or_fail(a, b, &test);

	a = printf("%2.9p\n", 1234);
	b = ft_printf("%2.9p\n", 1234);
	rock_or_fail(a, b, &test);

	a = printf("%\n");
	b = ft_printf("%\n");
	rock_or_fail(a, b, &test);

	a = printf("%.5p", 0);
	b = ft_printf("%.5p", 0);
	rock_or_fail(a, b, &test);

	a = printf("%00s%00s\n", "", NULL);
	b = ft_printf("%00s%00s\n", "", NULL);
	rock_or_fail(a, b, &test);
*/

if (god != 0)
{
	printf(MAGENTA "\n\n\n--------------------------------------------------\n"RESET);
	printf(MAGENTA "---------------SADNESS IS A BLESSING--------------\n"RESET);
	printf(MAGENTA "-----------------failed test %d------------------\n"RESET, fail);
	printf(MAGENTA "--------------------------------------------------\n"RESET);
}
	else
{
	printf(GREEN "\n\n\n--------------------------------------------------\n"RESET);
	printf(GREEN "--------------WOOOOOOT WOOOOT 100 %%---------------\n"RESET);
	printf(GREEN "--------------------------------------------------\n"RESET);
}
return (0);
}