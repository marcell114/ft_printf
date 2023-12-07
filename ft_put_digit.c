/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <mpal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:55:40 by mpal              #+#    #+#             */
/*   Updated: 2023/12/07 09:19:17 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int    ft_put_digit(long n, int base, int is_uppercase)
{
    int     i;
    char    *digits;

    i = 0;
    if (is_uppercase == 1)
        digits = "0123456789ABCDEF";
    else
        digits = "0123456789abcdef";
    if (n < 0)
    {
        write(1, "-", 1);
        return (ft_put_digit(-n, base, is_uppercase) +1);
    }
    else if (n < base)
        return (ft_putchar(digits[n]));
    else
    {
        i += ft_put_digit((n / base), base, is_uppercase);
        i += ft_put_digit((n % base), base, is_uppercase);
        return (i);
    }
}
