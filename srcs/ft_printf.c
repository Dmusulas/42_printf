/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:50:51 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/28 22:30:23 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>

int	ft_convert(const char *s, va_list arg)
{
	s++;
	if (*s == 'c')
		return (ft_convert_c(va_arg(arg, int)));
	else if (*s == 's')
		return (ft_convert_s(va_arg(arg, char *)));
	else if (*s == 'p')
		return (ft_convert_p(va_arg(arg, long)));
	else if (*s == 'd' || *s == 'i' || *s == 'u')
		return (ft_convert_d(va_arg(arg, int)));
	else if (*s == 'x')
		return (ft_convert_x(va_arg(arg, int), 0));
	else if (*s == 'X')
		return (ft_convert_x(va_arg(arg, int), 1));
	else if (*s == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;

	va_start(args, s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
			len += ft_convert(s++, args);
		else
		{
			ft_putchar_fd(*s, 1);
			len++;
		}
		s++;
	}
	va_end(args);
	return (len);
}

#include <stdio.h>
#include <assert.h>

int	main(void)
{
	int	r_org = 0;
	int	r_my = 0;

	// r_my = ft_printf("Test, %s\n", "str_test");
	// r_org = printf("Test, %s\n", "str_test");
	// printf("The original return: %i\nMine return: %i\n", r_org, r_my);
	// r_my = ft_printf("Test, %c\n", '2');
	// r_org = printf("Test, %c\n", '2' );
	// printf("The original return: %i\nMine return: %i", r_org, r_my);
	r_my = ft_printf("Test, %p\n", -1);
	r_org = printf("Test, %p\n", -1);
	printf("The original return: %i\nMine return: %i", r_org, r_my);
	// r_my = ft_printf("Test, %d -> %i\n", 123, 123);
	// r_org = printf("Test, %d -> %i\n", 123, 123);
	// printf("The original return: %i\nMine return: %i", r_org, r_my);
	// r_my = ft_printf("Test, %x -> %X\n", 123, 123);
	// r_org = printf("Test, %x -> %X\n", 123, 123);
	// printf("The original return: %i\nMine return: %i", r_org, r_my);
	// r_my = ft_printf("Test, %% -> %X\n", 123);
	// r_org = printf("Test, %% -> %X\n", 123);
	// printf("The original return: %i\nMine return: %i", r_org, r_my);
	return (EXIT_SUCCESS);
}
