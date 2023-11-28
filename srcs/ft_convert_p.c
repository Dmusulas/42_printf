/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:35:52 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/28 22:25:37 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convert_p(unsigned long long c)
{
	char	*rtrn;
	char	*start;
	int		len;
	int		i;

	len = 0;
	i = 0;
	start = ft_strdup("0x");
	rtrn = generate_str_ll_base(c, 16);
	len = ft_strlen(start) + ft_strlen(rtrn);
	while (rtrn[i])
	{
		if (rtrn[i] > 64 && rtrn[i] < 91)
			rtrn[i] = ft_tolower(rtrn[i]);
		i++;
	}
	ft_putstr_fd(start, 1);
	ft_putstr_fd(rtrn, 1);
	free(start);
	free(rtrn);
	return (len);
}
