/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:50:51 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/24 18:15:43 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"
#include <stdarg.h>

void	ft_convert(const char *s, va_list arg)
{
	s++;
	if (*s == 'c')
		ft_putchar_fd(arg, 1);
	else if (*s == 's')
		ft_putstr_fd(arg)
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;

	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
			ft_convert(s, args);
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

int main(int argc, char *argv[])
{
	ft_printf("Test123");
	return (EXIT_SUCCESS);
}
