#include "../ft_printf.h"


void	s_conversion(void)
{
	int i;

	i = 0;
	//precision > width 
	
	//1.1 precision > length && width > length 
	//out_len = width
	// printf ("Actual - \n"); 
	// printf ("%-20.30s\n", "Hello world!!");	
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-20.30s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");
	
	//1.2 precision > length && width < length
	//out_len = len #
	// printf ("Actual - \n"); 
	// printf ("%-5.30s\n", "Hello world!!");
	// printf ("i - %d\n", i);	
	// printf ("My Output - \n"); 
	ft_printf ("%-5.30s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");
	
	//1.3 precision > length && width = length
	//out_len = len #
	// printf ("Actual - \n"); 
	// printf ("%-13.30s\n", "Hello world!!");	
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-13.30s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");
	
	//1.4 precision < length && width < length 
	// out_len = precision
	// printf ("Actual - \n"); 
	// printf ("%-8.9s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-8.9s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

	//1.5 precision = length && width < length
	// out_len = precision
	// printf ("Actual - \n"); 
	// printf ("%-9.13s\n", "Hello world!!");
	// printf ("i - %d\n", i);	
	// printf ("My Output - \n"); 
	ft_printf ("%-9.13s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

// // // printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");

	//width > precision
	//2.1 precision > length && width > length
	// printf ("Actual - \n"); 
	// printf ("%-20.15s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-20.15s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

	//2.2 precision < length && width > length
	// printf ("Actual - \n"); 
	// printf ("%-20.10s\n", "Hello world!!");	
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-20.10s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

	//2.3 precision = length && width > length	
	// printf ("Actual - \n"); 
	// printf ("%-20.13s\n", "Hello world!!");	
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-20.13s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

	//2.4  preciosion < len && width == length
	// printf ("Actual - \n"); 
	// printf ("%-13.10s\n", "Hello world!!");	
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-13.10s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

	//2.5  preciosion = len && width == length
	// printf ("Actual - \n"); 
	// printf ("%-13.13s\n", "Hello world!!");	
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-13.13s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

	//2.3 precision < length && width < length 
	// printf ("Actual - \n"); 
	// printf ("%-10.5s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-10.5s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

// // // printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");

	// width == precision
	// 3.1. width > length && precision > length	
	// printf ("Actual - \n"); 
	// printf ("%-30.30s\n", "Hello world!!");	
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-30.30s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

	// 3.2 width < length && precision < length 
	// printf ("Actual - \n"); 
	// printf ("%-10.10s\n", "Hello world!!");	
	// printf ("i - %d\n", i);
	// printf ("My Output - \n"); 
	ft_printf ("%-10.10s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

	// 3.3 width == len && precision == width
	// printf ("Actual - \n"); 
	// printf ("%-13.13s\n", "Hello world!!");	
	// printf ("i - %d\n", i);	
	// printf ("My Output - \n"); 
	ft_printf ("%-13.13s\n", "Hello world!!");
	// printf ("i - %d\n", i);
	// printf ("-----------------------------------\n");

// // // printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");
}

int main()
{
	int i = 0;
	i  = printf ("hello, %s", NULL);
	printf ("\ni - %d\n",i);
	i  = ft_printf ("hello, %s", NULL);
	printf ("\ni - %d\n",i);
	while(1);

}