/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:54:20 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/28 22:25:57 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_convert_s(char *s);
int		ft_convert_c(int c);
int		ft_printf(const char *s, ...);
int		ft_putnbr_base_fd(int nbr, int base, int fd);
int		ft_convert_p(unsigned long long c);
char	*generate_str_ll_base(unsigned long long ll, int base);
int		ft_convert_d(int d);
int		ft_convert_x(int d, int cap);
#endif // !LIBFTPRINTF_H
