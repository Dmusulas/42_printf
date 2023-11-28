/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:58:03 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/28 22:06:45 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convert_x(int d, int cap)
{
	int		len;
	char	*ret;
	int		i;

	len = 0;
	i = 0;
	ret = generate_str_ll_base(d, 16);
	len = ft_strlen(ret);
	if (cap == 1)
	{
	}
	else
	{
		while (ret[i])
		{
			if (ret[i] > 64 && ret[i] < 91)
				ret[i] = ft_tolower(ret[i]);
			i++;
		}
	}
	ft_putstr_fd(ret, 1);
	free(ret);
	return (len);
}
