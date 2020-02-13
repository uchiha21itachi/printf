#include "ft_printf.h"

int		is_flag(char c)
{
	if (c == '-' || c == '0')
		return (1);
	return (0);
}

f_list		update_flags(char c, f_list block)
{
	if (c == '-')
		block.minus_flag = 1;
	if (c == '0')
		block.zero_flag = 1;
	return (block);
}

f_list		check_stars(f_list block, const char *format, int i, va_list arg_list)
{
	// printf ("format[i] at the start of check star = %c and i = %d\n", format[i], i);
	while (format[++i] != '\0' && check_specifier(format[i]))
	{
		if (format[i] == '.')
		{
			i++;
			if (format[i] == '*')
			{
				// printf ("\n111111111111\n");
				block.p_star = 1;
				block.precision = va_arg(arg_list, int);
			}
		}
		else if (format[i] == '*')
		{	
			// printf ("\n2222222222\n");
			block.w_star = 1;
			block.width = va_arg(arg_list, int);
		}
	}		
	// printf ("format[i] at the end of check star = %c and i = %d\n", format[i], i);
	return (block);
}
