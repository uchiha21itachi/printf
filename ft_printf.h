/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:24:35 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/03 18:24:39 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h> 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// #include "../libft/yassharm4/libft.h"

typedef struct	f_list
{
	int		precision;
	int		p_avail;
	int		width;
	int		star_flag;
	int		minus_flag;
	int		zero_flag;
	int		count;

}				f_list;

int		ft_printf(const char *format, ...);


//printing functions in ft_printf_utils

void	ft_putchar(char c);

//libft functions 
char	*ft_strdup(char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char s2);
int		ft_isdigit(int c);

//parser functions inside parser.utils.c 

f_list		update_flags(char c, f_list block);
int		is_flag(char c);

#endif
