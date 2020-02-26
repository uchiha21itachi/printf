#include "ft_printf.h"

char	*convert_x(long long num, int base, f_list block)
{
	static char	*representation;
	static char	buffer[50];
	char		*ptr;

	representation = ft_strdup("0123456789abcdef");
	ptr = &buffer[49];
	*ptr = '\0';
	while (1)
	{
		*--ptr = representation[num % base];
		num /= base;
		if (num == 0)
			break ;
	}
	if (ft_strlen(ptr) < 2 && block.p_avail)
		ptr[0] = '\0';
	free(representation);
	return (ptr);
}

f_list		parse_x(f_list block, va_list arg_list)
{
	unsigned int x;
	char	*str;
	int		spaces;

	x = va_arg(arg_list, unsigned int);
	str = convert_x(x, 16, block);
	if (block.width > ft_strlen(str))
		spaces = block.width - ft_strlen(str);
	else
		spaces = 0;
	block = check_zeros(str, block, spaces);
	// free (str);
	return (block);
}