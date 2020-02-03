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

void 	ft_putstr (char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);



#endif
