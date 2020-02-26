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
	char *str  = "Hell yeah";
	int i = printf("yo - %10p %20s %d %c %d %i %% %010%\n", str, "print me", 9653, 75, 2342, 223112);
	int j = ft_printf("my - %10p %20s %d %c %d %i %% %010%\n", str, "print me", 9653, 75, 2342, 223112);
	// int i = printf("%% %10% %10.30% %*.*% %-10% %05% %020.30% %-0% %.% % \n", 40, 20);
	// int j = ft_printf("%% %10% %10.30% %*.*% %-10%  %05% %020.30% %-0% %.% \n % \n", 40, 20);
	// int j = ft_printf ("%");
	while (1);
	printf ("\n\n\nmy return - %d your return - %d", j, i);
}






























