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
	a =  printf("A%0*.*i\n", -5, -5, 0);
	b = ft_printf("B%0*.*i\n", -5, -5, 0);
	rock_or_fail(a, b, &test);

	a =  printf("A%0*.*i\n", 5, -5, 0);
	b = ft_printf("B%0*.*i\n", 5, -5, 0);
	rock_or_fail(a, b, &test);

	a =  printf("A%*.*i\n", -5, -5, 0);
	b = ft_printf("B%*.*i\n", -5, -5, 0);
	rock_or_fail(a, b, &test);

	a =  printf("A%*.*i\n", 5, -5, 0);
	b = ft_printf("B%*.*i\n", 5, -5, 0);
	rock_or_fail(a, b, &test);

	a =  printf("A%0*.*i\n", -5, 5, 0);
	b = ft_printf("B%0*.*i\n", -5, 5, 0);
	rock_or_fail(a, b, &test);
	
// 	a =  printf("%0X%-s%%%-.0d%*cA3w%0.*xWXT\n", 0, "", -2147483647, 2, '\0', -8, 0);
// 	b = ft_printf("%0X%-s%%%-.0d%*cA3w%0.*xWXT\n", 0, "", -2147483647, 2, '\0', -8, 0);
// 	rock_or_fail(a, b, &test);


// 	a =  printf("%-.4dw%*c%.*X\n", -2147483647, 6, 'a', -3, 0);
// 	b = ft_printf("%-.4dw%*c%.*X\n", -2147483647, 6, 'a', -3, 0);
// 	rock_or_fail(a, b, &test);

// a =  printf("Y1Pox6eH%-2.*xRY2%-14.*x%.2XLKy%0*udKHbNQjB\n", -3, 0, 1, 0, -2147483647, 7, -2147483647);
// 	b = ft_printf("Y1Pox6eH%-2.*xRY2%-14.*x%.2XLKy%0*udKHbNQjB\n", -3, 0, 1, 0, -2147483647, 7, -2147483647);
// 	rock_or_fail(a, b, &test);

}

































/*static char	*representation;
	static char	buffer[50];
	char		*ptr;

	printf("num - [%lld]\n",num);

	representation = ft_strdup("0123456789abcdef");
	ptr = &buffer[49];
	*ptr = '\0';
	while (1)
	{
		*--ptr = representation[num % base];
		num /= base;
		if (num == 0)
			break ;
	}

	if (ft_strlen(ptr) <= 2 && block.p_avail)
		ptr[0] = '\0';
	free(representation);

	return (ptr);
	*/























