/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 03:36:48 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/28 03:36:48 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>

size_t	ft_strlength(const char *str);
int		format_char(int c);
int		format_string(char *str);
int		format_integer(int n);
int		format_unsigned(unsigned int value);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		format_base(unsigned long n, const char *base);
int		format_conversion(const char *conversion, va_list args, void *str);
int		ft_printf(const char *format, ...);

#endif
