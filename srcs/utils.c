/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 06:52:38 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/29 06:52:38 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (s)
		write(1, s, ft_strlength(s));
}

// int main(void)
// {
//     int ret1, ret2;

//     // Test simple
//     ret1 = printf("Hello %s!\n", "world");
//     ret2 = ft_printf("Hello %s!\n", "world");
//     printf("printf: %d, ft_printf: %d\n\n", ret1, ret2);

//     // Test avec différents types
//     printf("Testing integers:\n");
//     ret1 = printf("Native: %d\n", 42);
//     ret2 = ft_printf("Custom: %d\n", 42);
//     printf("printf: %d, ft_printf: %d\n\n", ret1, ret2);

//     printf("Testing unsigned integers:\n");
//     ret1 = printf("Native: %u\n", 42);
//     ret2 = ft_printf("Custom: %u\n", 42);
//     printf("printf: %d, ft_printf: %d\n\n", ret1, ret2);

//     printf("Testing hexadecimals:\n");
//     ret1 = printf("Native: %x\n", 255);
//     ret2 = ft_printf("Custom: %x\n", 255);
//     printf("printf: %d, ft_printf: %d\n\n", ret1, ret2);

//     printf("Testing pointers:\n");
//     void *ptr = &ret1;
//     ret1 = printf("Native: %p\n", ptr);
//     ret2 = ft_printf("Custom: %p\n", ptr);
//     printf("printf: %d, ft_printf: %d\n\n", ret1, ret2);

//     return 0;
// }
