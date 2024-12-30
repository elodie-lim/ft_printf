/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_formatter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 05:50:02 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/29 05:50:02 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_nbrlen(int n)
{
	if (n == INT_MIN)
		return (11);
	if (n > -10 && n < 0)
		return (2);
	if (n < 0)
		return (2 + ft_nbrlen(-n / 10));
	if (n < 10)
		return (1);
	return (1 + ft_nbrlen(n / 10));
}

static void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

static char	*ft_utoa(unsigned int n)
{
	char			*str;
	unsigned int	nb;
	int				len;

	nb = n;
	len = 1;
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

int	format_integer(int n)
{
	ft_putnbr(n);
	return (ft_nbrlen(n));
}

int	format_unsigned(unsigned int value)
{
	char	*str;
	int		len;

	str = ft_utoa(value);
	ft_putstr(str);
	len = (int)ft_strlen(str);
	free(str);
	return (len);
}
