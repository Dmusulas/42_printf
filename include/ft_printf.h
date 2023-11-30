/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:54:20 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/30 17:21:56 by dmusulas         ###   ########.fr       */
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
int		ft_convert_p(size_t c);
char	*generate_num_base(unsigned int num, int base);
char	*generate_ll_base(unsigned long long num, int base);
int		ft_convert_d(int d);
int		ft_convert_x(int d, int cap);
int		ft_convert_ll(unsigned long long d);
int		ft_convert_u(unsigned int d);
#endif // !LIBFTPRINTF_H
