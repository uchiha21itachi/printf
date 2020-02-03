#include <stdarg.h> 
#include <stdio.h>


// ft_printf(const char *, ...)
// {

// }

void	test1(void)
{
	//------------------Test for '-' --------------------
	printf ("------------------Test for '-' --------------------\n\n");

	int i = 2398;
	char str[100] = "hello world this is test!";
	
	printf("%d\n", i);
	printf("%10d\n", i);
	printf("%-10d\n", i);
	printf("%-*d\n",10, i);
	printf("%*d\n",10, i);
	printf("%-*.30d\n",10, i);
	printf("%*.30d\n",10, i);

	printf("%s\n", str);
	printf("%30s\n", str);
	printf("%-30s\n", str);
	printf("%-*s\n",30, str);
	printf("%*s\n",30, str);
	printf("%-*.10s\n",30, str);
	printf("%*.10s\n",30, str);

}

void	test2(void)
{
	//------------------Test for '0' --------------------
	printf ("------------------Test for '0' --------------------\n\n");
	int i = 2398;
	char str[100] = "hello world this is test!";

	printf("%d\n",i);	
	printf("%0d\n",i);	
	printf("%010d\n",i);	
	printf("%-10d\n",i);	

	printf("%s\n",str);	
	// printf("%0s\n",str);	
	// printf("%030s\n",str);	
}

void	test3(void)
{
	//------------------Test for '.' --------------------
	printf ("------------------Test for '.' --------------------\n\n");
	int i = 2398;
	char str[100] = "hello world this is test!";

	printf("%d\n",i);	
	printf("%.10d\n",i);	
	// printf("%d\n",i);	

	printf("%s\n",str);	
	printf("%.20s\n",str);	
	printf("%30.010s\n",str);	

}


int main()
{
	// test1();
	printf ("%-10s\n", "Hello world!!");
	// test2();
	// while (1);
	// test3();
}