/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 03:36:07 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/28 03:36:07 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	void	*str;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		str = NULL;
		if (*format == '%')
		{
			format++;
			len += format_conversion(format, args, str);
		}
		else
		{
			len++;
			write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (len);
}
