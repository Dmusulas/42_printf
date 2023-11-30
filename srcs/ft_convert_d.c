/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:43:10 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/29 17:18:15 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convert_d(int d)
{
	int		len;
	char	*ret;

	len = 0;
	ret = ft_itoa(d);
	len = ft_strlen(ret);
	ft_putstr_fd(ret, 1);
	free(ret);
	return (len);
}
