#include "../ft_printf.h"


void	s_conversion(void)
{
	int i;

	i = 0;
	//precision > width 
	
	//1.1 precision > length && width > length 
	//out_len = width 
	i = printf ("%-20.30s\n", "Hello world!!");	
	printf ("i - %d\n", i);
	i = ft_printf ("%-20.30s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");
	
	//1.2 precision > length && width < length
	//out_len = len #
	i = printf ("%-5.30s\n", "Hello world!!");
	printf ("i - %d\n", i);	
	i = ft_printf ("%-5.30s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");
	
	//1.3 precision > length && width = length
	//out_len = len #
	i = printf ("%-13.30s\n", "Hello world!!");	
	printf ("i - %d\n", i);
	i = ft_printf ("%-13.30s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");
	
	//1.4 precision < length && width < length 
	// out_len = precision
	i = printf ("%-9.10s\n", "Hello world!!");
	printf ("i - %d\n", i);
	i = ft_printf ("%-9.10s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

	//1.5 precision = length && width < length
	// out_len = precision
	i = printf ("%-9.13s\n", "Hello world!!");
	printf ("i - %d\n", i);	
	i = ft_printf ("%-9.13s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");

	//width > precision
	//2.1 precision > length && width > length
	i = printf ("%-20.15s\n", "Hello world!!");
	printf ("i - %d\n", i);
	i = ft_printf ("%-20.15s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

	//2.2 precision < length && width > length
	i = printf ("%-20.10s\n", "Hello world!!");	
	printf ("i - %d\n", i);
	i = ft_printf ("%-20.10s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

	//2.3 precision = length && width > length	
	i = printf ("%-20.13s\n", "Hello world!!");	
	printf ("i - %d\n", i);
	i = ft_printf ("%-20.13s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

	//2.4  preciosion < len && width == length
	i = printf ("%-13.10s\n", "Hello world!!");	
	printf ("i - %d\n", i);
	i = ft_printf ("%-13.10s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

	//2.5  preciosion = len && width == length
	i = printf ("%-13.13s\n", "Hello world!!");	
	printf ("i - %d\n", i);
	i = ft_printf ("%-13.13s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

	//2.3 precision < length && width < length 
	i = printf ("%-10.5s\n", "Hello world!!");
	printf ("i - %d\n", i);
	i = ft_printf ("%-10.5s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");

	// width == precision
	// 3.1. width > length && precision > length	
	i = printf ("%-30.30s\n", "Hello world!!");	
	printf ("i - %d\n", i);
	i = ft_printf ("%-30.30s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

	// 3.2 width < length && precision < length 
	i = printf ("%-10.10s\n", "Hello world!!");	
	printf ("i - %d\n", i);
	i = ft_printf ("%-10.10s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

	// 3.3 width == len && precision == width
	i = printf ("%-13.13s\n", "Hello world!!");	
	printf ("i - %d\n", i);	
	i = ft_printf ("%-13.13s\n", "Hello world!!");
	printf ("i - %d\n", i);
	printf ("-----------------------------------\n");

printf ("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");
}

int main()
{
	int i = 0;

		s_conversion();
		// ft_printf("Hello world %-*.*c %21c helppp ",25, 50, 65, 65);
		// printf("|Hello world %-*c %*c helppp|\n", 23, 65, 21, 65);
		// ft_printf("|Hello world %-*c %*c helppp|\n", 23, 65, 21, 65);
		// printf ("|please i am a string = %10s|\n", "Its me me me");
//		// ft_printf ("|please i am a string = %10s|\n", "Its me me me");
		// ft_printf("Hello world %-0391.*s %21.*c helppp ", 23, 100,  65, 65);
		// ft_printf("Hello world %-0391.23s %21.42c hell \n",65, 65);
		// ft_printf("Hello world %-0391.23s %21.52c lodaa \n",65, 65);
		// ft_printf("Hello world %-0391.23s %.21c helppp \n",65, 65);

}