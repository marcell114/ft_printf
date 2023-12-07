/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <mpal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:17:19 by mpal              #+#    #+#             */
/*   Updated: 2023/12/07 16:17:30 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void)
{
    int count;
    int count2;
    int a;
    int *p = &a;

    a = 123;
    count = ft_printf("hello %s\n", "Marci this is ft_printf");
    ft_printf("the char written by ft_printf are %d\n", count);
    count2 = printf("hello %s\n", "Marci and this is printf");
    printf("the char written by printf are %d\n", count2);
    //
    ft_printf("ft_printf integer base 10 %i\n", -1234567890);
    printf("printf integer base 10 %i\n", -1234567890);
    //
    ft_printf("ft_printf unsigned decimal %u\n", 1234562U);
    printf("printf unsigned decimal  %u\n", 1234562U);
    //
    ft_printf("ft_printf hexadec lowercase %x\n", 13);
    printf("printf hexadec lowercase  %x\n", 13);
    //
    ft_printf("ft_printf hexadec uppercase %X\n", 13);
    printf("printf hexadec upperercase %X\n", 13);
    //
    ft_printf("%%\n");
    printf("%%\n");
    //
    ft_printf("ft_printf pointer %p\n", p);
    printf("printf pointer %p\n", p);
}
