/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:22:59 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/16 06:07:31 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*create_null_str(void)
{
	char *s;

	s = (char *)malloc(7 * sizeof (char));
	s[0] = '(';
	s[1] = 'n';
	s[2] = 'u';
	s[3] = 'l';
	s[4] = 'l';
	s[5] = ')';
	s[6] = '\0';
	return (s);
}

char	*get_str(va_list arg_list, f_list block)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(arg_list, char *);
	if (str == NULL)
		str = create_null_str();
	else
		str = ft_strdup(str);
	if (block.p_avail)
	{
		if (block.precision <= 0)
			str[0] = '\0';
		else if (block.precision < ft_strlen(str))
		{
			while (i < block.precision)
				i++;
			str[i] = '\0';
		}
	}
	return (str);
}

f_list		print_string(char *str, f_list block, int spaces)
{
	int i;

	i = 0;
	if (block.minus_flag)
	{
		block.count += ft_putstr(str, ft_strlen(str));
		while (i++ < spaces)
			block.count += write(1, " ", 1);
	}
	else
	{
		while (i++ < spaces)
			block.count += write(1, " ", 1);
		block.count += ft_putstr(str, ft_strlen(str));
	}
	return (block);
}

f_list		parse_s(f_list block, va_list arg_list)
{
	char *str;
	char spaces;

	str = get_str(arg_list, block);
	if (block.width > ft_strlen(str))
		spaces = block.width - ft_strlen(str);
	else
		spaces =  0;
	block = print_string(str, block, spaces);
	free (str);
	return (block);
}