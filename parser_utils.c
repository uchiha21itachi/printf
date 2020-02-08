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
