/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:24:35 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/16 06:07:06 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h> 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	f_list
{
	int		precision;
	int 	p_star;
	int		p_avail;
	int		width;
	int		w_star;
	int		minus_flag;
	int		zero_flag;
	int		count;

}				f_list;

/*ft_printf functions*/

int			ft_printf(const char *format, ...);
f_list		set_data(f_list block, int i, const char *format, va_list arg_list);
f_list		set_init_data(f_list block);
f_list		parse_flags(f_list block, const char *format, int i);
f_list		parse(f_list block, const char *format, int i, va_list arg_list);

/*parser functions inside parser.utils.c*/

f_list		update_flags(char c, f_list block);
int			is_flag(char c);
f_list		check_stars(f_list block, const char *format, int i, va_list arg_list);

/*printing functions in ft_printf_utils */

void		ft_putchar(char c);
int			ft_isdigit(int c);
void		print_block(f_list block);
int			is_specifier(char c);

// Functions handling string conversion in ft_printf_strings
f_list		parse_s(f_list block, va_list arg_list);
f_list		parse_c(f_list block, va_list arg_list);
f_list		parse_p(f_list block, va_list arg_list);
f_list		parse_d(f_list block, va_list arg_list);
f_list		parse_u(f_list block, va_list arg_list);


//Utils from libft in ft_printf_libft_utils
int			ft_strlen(const char *s);
char		*ft_strdup(char *s1);
int			ft_putstr(char *s, int str_print_len);

// functions from parse_s
int			cal_output_len(f_list block, int len, int output_len);
int			cal_spaces(int len, f_list block);
f_list		print_string(char *str, f_list block, int spaces);

//functions in ft_itoa
char			*ft_itoa(int num);


#endif
