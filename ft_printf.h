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

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	int		precision;
	int		p_star;
	int		p_avail;
	int		width;
	int		w_star;
	int		minus_flag;
	int		zero_flag;
	int		count;

}				t_list;

int				ft_printf(const char *format, ...);
t_list			set_data(t_list block, int i, const char *f, va_list arg_list);
t_list			set_init_data(t_list block);
t_list			parse_flags(t_list block, const char *format, int i);
t_list			parse(t_list block, const char *f, int i, va_list arg_list);

t_list			update_flags(char c, t_list block);
int				is_flag(char c);
t_list			check_stars(t_list b, const char *f, int i, va_list arg_list);
int				check_mod(const char *format, int i);

void			ft_putchar(char c);
int				ft_isdigit(int c);
int				is_specifier(char c);

int				ft_strlen(const char *s);
char			*ft_strdup(char *s1);
int				ft_putstr(char *s, int str_print_len);

t_list			parse_s(t_list block, va_list arg_list);
t_list			parse_c(t_list block, va_list arg_list);
t_list			parse_p(t_list block, va_list arg_list);
t_list			parse_d(t_list block, va_list arg_list);
t_list			parse_u(t_list block, va_list arg_list);
t_list			parse_x(t_list block, va_list arg_list);
t_list			parse_big_x(t_list block, va_list arg_list);
t_list			print_mod(t_list block, int i, const char *f, va_list arg_list);

t_list			print_string(char *str, t_list block, int spaces);

char			*ft_itoa(int num);
char			*ft_utoa(long num);

t_list			check_zeros(char *num, t_list block, int spaces);
t_list			print_number(t_list block, char *num, int zeros, int spaces);

#endif
