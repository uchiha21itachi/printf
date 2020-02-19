#include <stdarg.h> 
#include <stdio.h>



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
// 	int i;

// 	i = 0;
// 	//precision > width 
	
// 	//1.1 precision > length && width > length 
// 	//out_len = width 
	printf ("%20.30s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);
	// ft_printf ("%20.30s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");
	
// 	//1.2 precision > length && width < length
// 	//out_len = len #
	printf ("%5.30s\n", "Hello world!!");
// 	printf ("i - %d\n", i);	
	// ft_printf ("%5.30s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");
	
// 	//1.3 precision > length && width = length
// 	//out_len = len #
	printf ("%13.30s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);
	// ft_printf ("%13.30s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");
	
// 	//1.4 precision < length && width < length 
// 	// out_len = precision
	printf ("%9.10s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	// ft_printf ("%9.10s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// 	//1.5 precision = length && width < length
// 	// out_len = precision
	printf ("%9.13s\n", "Hello world!!");
// 	printf ("i - %d\n", i);	
	// ft_printf ("%9.13s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");

// 	//width > precision
// 	//2.1 precision > length && width > length
	printf ("%20.15s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	// ft_printf ("%20.15s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// 	//2.2 precision < length && width > length
	printf ("%20.10s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);
	// ft_printf ("%20.10s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// 	//2.3 precision = length && width > length	
	printf ("%20.13s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);
	// ft_printf ("%20.13s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// 	//2.4  preciosion < len && width == length
	printf ("%13.10s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);
	// ft_printf ("%13.10s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// 	//2.5  preciosion = len && width == length
	printf ("%13.13s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);
	// ft_printf ("%13.13s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// 	//2.3 precision < length && width < length 
	printf ("%10.5s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	// ft_printf ("%10.5s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");

// 	// width == precision
// 	// 3.1. width > length && precision > length	
	printf ("%30.30s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);
	// ft_printf ("%30.30s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// 	// 3.2 width < length && precision < length 
	printf ("%10.10s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);
	// ft_printf ("%10.10s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

// 	// 3.3 width == len && precision == width
	printf ("%13.13s\n", "Hello world!!");	
// 	printf ("i - %d\n", i);	
	// ft_printf ("%13.13s\n", "Hello world!!");
// 	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");
}

void	s_conversion_with_flag1(void)
{
	//s_conversion with flag '-'

	//precision > width 
	//1.1 precision > length && width > length  
	printf ("%020.30s\n", "Hello world!!");
	//1.2 precision > length && width < length  
	printf ("%05.30s\n", "Hello world!!");
	//1.3 precision < length && width < length 
	printf ("%09.10s\n", "Hello world!!");
	
	//width > precision
	//2.1 precision > length && width > length
	printf ("%020.15s\n", "Hello world!!");
	//2.2 precision < length && width > length
	printf ("%020.10s\n", "Hello world!!");
	//2.3 precision < length && width < length 
	printf ("%010.5s\n", "Hello world!!");
	
	//width == precision
	//3.1. width > length && precision > length 
	printf ("%030.30s\n", "Hello world!!");
	//3.2 width < length && precision < length 
	printf ("%010.10s\n", "Hello world!!");

	printf ("%030s\n", "hello world!!");`
	printf ("%0.30s\n", "hello world!!");
	//conclusion - Output is same just spaces are in the end instead of start

}

void	i_and_d_conversion(void)
{
	//precision > width
	//1.1 precision > num_length && width > num_length	
	//...........................
	printf ("%10.15d\n", 12203);
	//1.2 precision < num_length && width < num_length	
	printf ("%2.4d\n", 12203);
	//1.3 precision > num_length && width < num_length	
	printf ("%2.10d\n", 12203);
	printf("-----------------------------------\n");

	//width > precision
	//2.1 precision > num_length && width > num_length	
	printf ("%15.10d\n", 12203);
	//2.2 precision < num_length && width < num_length	
	printf ("%4.2d\n", 12203);	
	//2.3 precision < num_length && width > num_length	
	printf ("%10.2d\n", 12203);	
	printf("-----------------------------------\n");

	//width == precision
	//3.1 precision > num_length && width > num_length	
	printf ("%10.10d\n", 12203);
	//3.2 precision < num_length && width < num_length	
	printf ("%4.4d\n", 12203);
	printf("-----------------------------------\n");

	//with only width
	//4.1 width greater than number length
	printf ("%10d\n", 12203);
	//4.1 width less than number length
	printf ("%4d\n", 12203);
	printf("-----------------------------------\n");

	//with only precision
	//5.1 precision greater than number length
	printf ("%.10d\n", 12203);
	//5.2 precision less than number length
	printf ("%.4d\n", 12203);
	printf("-----------------------------------\n");


}

void	i_and_d_conversion_with_flag1(void)
{
	//i_and_d coversion with flag '-'

	//precision > width
	//1.1 precision > num_length && width > num_length	
	printf ("%-10.15d\n", 12203);
	//1.2 precision < num_length && width < num_length	
	printf ("%-2.4d\n", 12203);
	//1.3 precision > num_length && width < num_length	
	printf ("%-2.10d\n", 12203);
	printf("-----------------------------------\n");

	//width > precision
	//2.1 precision > num_length && width > num_length	
	printf ("%-15.10d\n", 12203);
	//2.2 precision < num_length && width < num_length	
	printf ("%-4.2d\n", 12203);
	//2.3 precision < num_length && width > num_length	
	printf ("%-10.2d\n", 12203);	
	printf("-----------------------------------\n");

	//width == precision
	//3.1 precision > num_length && width > num_length	
	printf ("%-10.10d\n", 12203);
	//3.2 precision < num_length && width < num_length	
	printf ("%-4.4d\n", 12203);
	printf("-----------------------------------\n");

	//with only width
	//4.1 width greater than number length
	printf ("%-10d\n", 12203);
	//4.1 width less than number length
	printf ("%-4d\n", 12203);
	printf("-----------------------------------\n");

	//with only precision
	//5.1 precision greater than number length
	printf ("%-.10d\n", 12203);
	//5.2 precision less than number length
	printf ("%-.4d\n", 12203);
	printf("-----------------------------------\n");

	//conclusion - Output is same as i_and_d_conversion (without any flags)just spaces are in the end instead of start
}

void	i_and_d_conversion_with_flag2(void)
{
	// i and d conversion with flag - '0'

	//precision > width
	//1.1 precision > num_length && width > num_length	
	printf ("%010.15d\n", 12203);
	//1.2 precision < num_length && width < num_length	
	printf ("%02.4d\n", 12203);
	//1.3 precision > num_length && width < num_length	
	printf ("%02.10d\n", 12203);
	printf("-----------------------------------\n");

	//width > precision
	//2.1 precision > num_length && width > num_length	
	printf ("%015.10d\n", 12203);
	//2.2 precision < num_length && width < num_length	
	printf ("%04.2d\n", 12203);	
	//2.3 precision < num_length && width > num_length	
	printf ("%010.2d\n", 12203);	
	printf("-----------------------------------\n");

	//width == precision
	//3.1 precision > num_length && width > num_length	
	printf ("%010.10d\n", 12203);
	//3.2 precision < num_length && width < num_length	
	printf ("%04.4d\n", 12203);
	printf("-----------------------------------\n");

	//only width
	//4.1 width greater than number length
	printf ("%010d\n", 12203);
	//4.2 width less than number length
	printf ("%03d\n", 12203);
	printf("-----------------------------------\n");

	//only precision
	//5.1 precision greater than number length
	printf ("%.010d\n", 12203);
	//5.2 precision less than number length
	printf ("%.03d\n", 12203);
	printf("-----------------------------------\n");

}


#include <unistd.h>

int main()
{
	s_conversion();
}
	
