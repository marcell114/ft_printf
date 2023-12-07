/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <mpal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:58:31 by mpal              #+#    #+#             */
/*   Updated: 2023/12/07 09:05:17 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_put_pointer(unsigned long long ptr, int ptr_prefix)
{
    int     i;
    char    *digits;

    digits = "0123456789abcdef";
    i = 0;
    if (ptr == 0)
        return (ft_putstr(PTR_NULL));
    else
    {
        if (ptr_prefix == 0)
        {
            i += write(1, "0x", 2);
            ptr_prefix = 1;
        }
        if (ptr >= 16)
        {
            i += ft_put_pointer(ptr / 16, ptr_prefix);
            ptr %= 16;
        }
        if (ptr < 16)
            i += write(1, &digits[ptr], 1);
        return (i);
    }
    return (i);
}
