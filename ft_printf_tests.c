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

void	s_conversion(void)
{
	//precision > width 
	//1.1 precision > length && width > length  
	printf ("%20.30s\n", "Hello world!!");
	//1.2 precision > length && width < length  
	printf ("%5.30s\n", "Hello world!!");
	//1.3 precision < length && width < length 
	printf ("%9.10s\n", "Hello world!!");
	
	//width > precision
	//2.1 precision > length && width > length
	printf ("%20.15s\n", "Hello world!!");
	//2.2 precision < length && width > length
	printf ("%20.10s\n", "Hello world!!");
	//2.3 precision < length && width < length 
	printf ("%10.5s\n", "Hello world!!");
	
	//width == precision
	//3.1. width > length && precision > length 
	printf ("%30.30s\n", "Hello world!!");
	//3.2 width < length && precision < length 
	printf ("%10.10s\n", "Hello world!!");
}

void	i_and_d_conversion(void)
{
	//precision > width
	//1.1 precision > num_length && width > num_length	
	printf ("%10.15d\n", 12203);
	//1.2 precision < num_length && width < num_length	
	printf ("%2.4d\n", 12203);
	//1.3 precision > num_length && width < num_length	
	printf ("%2.10d\n", 12203);

	//width > precision
	//2.1 precision > num_length && width > num_length	
	printf ("%15.10d\n", 12203);
	//2.2 precision < num_length && width < num_length	
	printf ("%4.2d\n", 12203);	
	//2.3 precision < num_length && width > num_length	
	printf ("%10.2d\n", 12203);	

	//width == precision
	//3.1 precision > num_length && width > num_length	
	printf ("%10.10d\n", 12203);
	//3.2 precision < num_length && width < num_length	
	printf ("%4.4d\n", 12203);

}


int main()
{
	int a = 2012;
	void *k = &a;

	printf ("%x\n",k);
	printf ("%d\n",a);
}








