#include "ft_printf.h"

void	test1(void)
{
	// char	str[30] = "Hell yeah"™;
	// ft_printf("print this %0-12.034s\n", str);
	//precision > width
	//1.1 precision > num_length && width > num_length	
	ft_printf ("%10.15d\n", 12203);
	//1.2 precision < num_length && width < num_length	
	ft_printf ("%2.4d\n", 12203);
	//1.3 precision > num_length && width < num_length	
	ft_printf ("%2.10d\n", 12203);
	ft_printf("-----------------------------------\n");

	//width > precision
	//2.1 precision > num_length && width > num_length	
	ft_printf ("%15.10d\n", 12203);
	//2.2 precision < num_length && width < num_length	
	ft_printf ("%4.2d\n", 12203);	
	//2.3 precision < num_length && width > num_length	
	ft_printf ("%10.2d\n", 12203);	
	ft_printf("-----------------------------------\n");

	//width == precision
	//3.1 precision > num_length && width > num_length	
	ft_printf ("%10.10d\n", 12203);
	//3.2 precision < num_length && width < num_length	
	ft_printf ("%4.4d\n", 12203);
	ft_printf("-----------------------------------\n");

	//with only width
	//4.1 width greater than number length
	ft_printf ("%10d\n", 12203);
	//4.1 width less than number length
	ft_printf ("%4d\n", 12203);
	ft_printf("-----------------------------------\n");
}

void	test2(void)
{
	//precision > width
	//1.1 precision > num_length && width > num_length	
	ft_printf ("%-10.15d\n", 12203);
	//1.2 precision < num_length && width < num_length	
	ft_printf ("%-2.4d\n", 12203);
	//1.3 precision > num_length && width < num_length	
	ft_printf ("%-2.10d\n", 12203);
	ft_printf("-----------------------------------\n");

	//width > precision
	//2.1 precision > num_length && width > num_length	
	ft_printf ("%-15.10d\n", 12203);
	//2.2 precision < num_length && width < num_length	
	ft_printf ("%-4.2d\n", 12203);
	//2.3 precision < num_length && width > num_length	
	ft_printf ("%-10.2d\n", 12203);	
	ft_printf("-----------------------------------\n");

	//width == precision
	//3.1 precision > num_length && width > num_length	
	ft_printf ("%-10.10d\n", 12203);
	//3.2 precision < num_length && width < num_length	
	ft_printf ("%-4.4d\n", 12203);
	ft_printf("-----------------------------------\n");

	//with only width
	//4.1 width greater than number length
	ft_printf ("%-10d\n", 12203);
	//4.1 width less than number length
	ft_printf ("%-4d\n", 12203);
	ft_printf("-----------------------------------\n");

	//with only precision
	//5.1 precision greater than number length
	ft_printf ("%0-.10d\n", 12203);
	//5.2 precision less than number length
	ft_printf ("%-.4d\n", 12203);
	ft_printf("-----------------------------------\n");
}

int main()
{
	test2();
}