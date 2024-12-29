#include "../include/ft_printf.h"
#include <stdio.h>
int    main(void)
{
    char    *str1 = "UN";
    char    *str2 = "DEUX";
    char    *str3 = malloc(1024);
    char    *str4 = NULL;
    char    *str5 = "";
    unsigned int        nb1 = 123456;
    unsigned int        nb2 = UINT_MAX;
    int        nb3 = 654321;
    int        nb4 = INT_MIN;
    int        retval1;
    int        retval2;
    int        retval1b;
    int        retval2b;
    int        retval3;
    int        retval4;
    int        retval5;
    int        retval6;
    int        retval7;
    int        retval8;
    int        retval9;
    int        retval10;
    int        retval11;
    int        retval12;
    int        retval13;
    int        retval14;
    int        retval15;
    int        retval16;

    printf("##########    s    ##########\n");
    retval1 = ft_printf("ft_ | s1 : %s, s2 : %s", str1, str2);
    retval1b = ft_printf(", null : %s, vide : %s.\n", str4, str5);
    retval2 = printf("man | s1 : %s, s2 : %s", str1, str2);
    retval2b = printf(", null : %s, vide : %s.\n", str4, str5);
    printf("retval ft_ = %d + %d\n", retval1, retval1b);
    printf("retval man = %d + %d\n", retval2, retval2b);

    printf("##########    X    ##########\n");
    retval3 = ft_printf("ft_ | 123456 : %X, UINT_MAX : %X.\n", nb1, nb2);
    retval4 = printf("man | 123456 : %X, UINT_MAX : %X.\n", nb1, nb2);
    printf("retval ft_ = %d\n", retval3);
    printf("retval man = %d\n", retval4);

    printf("##########    x    ##########\n");
    retval3 = ft_printf("ft_ | 123456 : %x, UINT_MAX : %x.\n", nb1, nb2);
    retval4 = printf("man | 123456 : %x, UINT_MAX : %x.\n", nb1, nb2);
    printf("retval ft_ = %d\n", retval3);
    printf("retval man = %d\n", retval4);

    printf("##########    p    ##########\n");
    retval5 = ft_printf("ft_ | ptr1 : %p, ptr2 : %p, ", str1, str2);
    retval6 = ft_printf("ptr3 : %p, NULL : %p.\n", str3, str4);
    retval7 = printf("man | ptr1 : %p, ptr2 : %p, ", str1, str2);
    retval8 = printf("ptr3 : %p, NULL : %p.\n", str3, str4);
    printf("retval ft_ = %d + %d\n", retval5, retval6);
    printf("retval man = %d + %d\n", retval7, retval8);
    free(str3);

    printf("##########    u    ##########\n");
    retval9 = ft_printf("ft_ | 123456 : %u, INT_MIN : %u.\n", -2, nb4);
    retval10 = printf("man | 123456 : %u, INT_MIN : %u.\n", -2, nb4);
    printf("retval ft_ = %d\n", retval9);
    printf("retval man = %d\n", retval10);

    printf("##########    d    ##########\n");
    retval9 = ft_printf("ft_ | 123456 : %d, INT_MIN : %d.\n", nb3, nb4);
    retval10 = printf("man | 123456 : %d, INT_MIN : %d.\n", nb3, nb4);
    printf("retval ft_ = %d\n", retval9);
    printf("retval man = %d\n", retval10);

    printf("##########    i    ##########\n");
    retval11 = ft_printf("ft_ | 654321 : %i, INT_MIN : %i.\n", nb3, nb4);
    retval12 = printf("man | 654321 : %i, INT_MIN : %i.\n", nb3, nb4);
    printf("retval ft_ = %d\n", retval11);
    printf("retval man = %d\n", retval12);

    printf("##########    c    ##########\n");
    retval13 = ft_printf("ft_ | trois : %c%c%c%c%c.\n", 'T', 'r', 'o', 'i', 's');
    retval14 = printf("man | trois : %c%c%c%c%c.\n", 'T', 'r', 'o', 'i', 's');
    printf("retval ft_ = %d\n", retval13);
    printf("retval man = %d\n", retval14);

    printf("##########    percent    ##########\n");
    retval15 = ft_printf("ft_ | percent : %%.\n");
    retval16 = printf("man | percent : %%.\n");
    printf("retval ft_ = %d\n", retval13);
    printf("retval man = %d\n", retval14);

    printf("##########    printf(0)    ##########\n");
    ft_printf("%d\n", ft_printf(0));
    printf("%d\n", printf(0));
}

