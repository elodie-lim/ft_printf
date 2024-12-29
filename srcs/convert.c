/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 07:16:54 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/29 07:16:54 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	format_base(unsigned long n, const char *base)
{
	char			*str;
	int				len;
	unsigned long	buffer;

	len = 1;
	buffer = n;
	while (buffer >= ft_strlength(base))
	{
		len++;
		buffer /= ft_strlength(base);
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	while (len > 0)
	{
		str[--len] = base[n % ft_strlength(base)];
		n /= ft_strlength(base);
	}
	write(1, str, ft_strlength(str));
	len = ft_strlength(str);
	free(str);
	return (len);
}

int	format_conversion(const char *conversion, va_list args, void *str)
{
	if (*conversion == 'd' || *conversion == 'i')
		return (format_integer(va_arg(args, int)));
	else if (*conversion == 's')
		return (format_string(va_arg(args, char *)));
	else if (*conversion == 'c')
		return (format_char(va_arg(args, int)));
	else if (*conversion == 'x')
		return (format_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (*conversion == 'X')
		return (format_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (*conversion == 'u')
		return (format_unsigned(va_arg(args, unsigned int)));
	else if (*conversion == 'p')
	{
		str = va_arg(args, void *);
		if (str == NULL)
			return (write(1, "(nil)", 5));
		return (write(1, "0x", 2) + format_base((unsigned long)str,
				"0123456789abcdef"));
	}
	else if (*conversion == '%')
		return (format_char('%'));
	return (0);
}
