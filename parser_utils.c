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

f_list		check_stars(f_list block, const char *format, va_list arg_list)
{
	int i;

	i = -1;
	while (format[++i] != '\0')
	{
		if (format[i] == '.')
		{
			while (format[i] != '\0')
			{
				if (format[i] == '*')
				{
					block.p_star = 1;
					block.precision = va_arg(arg_list, int);
				}
				i++;
			}
		}
		if (format[i] == '*')
		{
			block.w_star = 1;
			block.width = va_arg(arg_list, int);
			
		}
	}
	return (block);
}
