#include "ft_printf.h"

int main()
{
	char	str[30] = "Hell yeah";
	ft_printf("print this %12.34s", str);
	while (1);
}