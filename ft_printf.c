/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:40:43 by mpal              #+#    #+#             */
/*   Updated: 2023/12/07 09:17:05 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int print_format(char specifier, va_list ap)
{
    int i;

    i = 0;
    if (specifier == 'c')
        i += ft_putchar(va_arg(ap, int));
    else if (specifier == 's')
        i += ft_putstr(va_arg(ap, char *));
    else if (specifier == 'd' || specifier == 'i')
        i += ft_put_digit(va_arg(ap, int), 10, 0);
    else if (specifier == 'x')
        i += ft_put_digit(va_arg(ap, unsigned int), 16, 0);
    else if (specifier == 'X')
        i += ft_put_digit(va_arg(ap, unsigned int), 16, 1);
    else if (specifier == 'p')
        i += ft_put_pointer((unsigned long long)va_arg(ap, void *),0);
    else if (specifier == 'u')
        i += ft_put_digit(va_arg(ap, unsigned int), 10, 0);
    else if (specifier == '%')
        i += ft_putchar('%');
    else
        i += write(1, &specifier, 1);
    return (i);
}

int ft_printf(const char *format, ...)
{
		va_list	ap;
		int count;

		va_start (ap, format);
		count = 0;
		while (*format != '\0')
		{
			if (*format == '%')
				count += print_format(*(++format), ap);
			else
				count += write(1, format, 1);
			++format;
		}
		va_end(ap);
		return (count);
}
