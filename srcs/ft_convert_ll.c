/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ll.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:43:10 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/30 17:26:20 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convert_ll(unsigned long long d)
{
	int		len;
	char	*ret;

	len = 0;
	if (d < 0)
	{
		ft_putchar_fd('-', 1);
		d *= -1;
		len++;
	}
	ret = generate_ll_base(d, 10);
	len = ft_strlen(ret);
	ft_putstr_fd(ret, 1);
	free(ret);
	return (len);
}
