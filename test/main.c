/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 06:58:47 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/31 07:42:43 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int main(void)
{
    int len_ft;
	int	len_real;

    len_ft = ft_printf("String test: %s\n", "lamborghini");
    len_real = printf("String test: %s\n", "lamborghini");
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Character test: %c\n", 'l');
    len_real = printf("Character test: %c\n", 'l');
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Signed integer test: %d\n", -12345);
    len_real = printf("Signed integer test: %d\n", -12345);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Unsigned integer test: %u\n", 12345);
    len_real = printf("Unsigned integer test: %u\n", 12345);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Hexadecimal (lowercase) test: %x\n", 255);
    len_real = printf("Hexadecimal (lowercase) test: %x\n", 255);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Hexadecimal (uppercase) test: %X\n", 255);
    len_real = printf("Hexadecimal (uppercase) test: %X\n", 255);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Pointer test: %p\n", (void*)0x7ffdf7a3b000);
    len_real = printf("Pointer test: %p\n", (void*)0x7ffdf7a3b000);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("NULL pointer test: %p\n", NULL);
    len_real = printf("NULL pointer test: %p\n", NULL);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Percentage symbol test: %%\n");
    len_real = printf("Percentage symbol test: %%\n");
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Zero in signed integer test: %d\n", 0);
    len_real = printf("Zero in signed integer test: %d\n", 0);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Zero in unsigned integer test: %u\n", 0);
    len_real = printf("Zero in unsigned integer test: %u\n", 0);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("INT_MAX test: %d\n", INT_MAX);
    len_real = printf("INT_MAX test: %d\n", INT_MAX);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("INT_MIN test: %d\n", INT_MIN);
    len_real = printf("INT_MIN test: %d\n", INT_MIN);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Large number in hexadecimal test: %x\n", 123456789);
    len_real = printf("Large number in hexadecimal test: %x\n", 123456789);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Multiple types test: %s, %d, %u, %x, %p\n", "lamborghini", 42, 42, 255, (void*)0x7ffdf7a3b000);
    len_real = printf("Multiple types test: %s, %d, %u, %x, %p\n", "lamborghini", 42, 42, 255, (void*)0x7ffdf7a3b000);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("String length test: %d\n", 100);
    len_real = printf("String length test: %d\n", 100);
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    len_ft = ft_printf("Empty string test: %s\n", "");
    len_real = printf("Empty string test: %s\n", "");
    printf("ft_printf returned: %d, printf returned: %d\n", len_ft, len_real);

    return (0);
}