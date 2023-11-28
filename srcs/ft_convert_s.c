/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:30:20 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/28 22:08:12 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convert_s(char *s)
{
	int	len;

	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len);
}
