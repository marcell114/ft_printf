/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:39:36 by mpal              #+#    #+#             */
/*   Updated: 2023/12/07 14:38:00 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# define PTR_NULL "(nil)"

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int		ft_printf(const char *, ...);
int		print_format(char specifier, va_list ap);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_put_digit(long n, int base, int is_uppercase);
int     ft_put_pointer(unsigned long long ptr, int ptr_prefix);

# endif
