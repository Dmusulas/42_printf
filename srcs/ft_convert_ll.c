/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ll.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:45:26 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/28 22:19:59 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*convert_base(unsigned long long nbr, int base, char *rtrn, size_t count)
{
	unsigned long long	quotient;
	unsigned long long	remaindr;

	quotient = nbr;
	remaindr = 0;
	while (quotient != 0)
	{
		remaindr = quotient % base;
		if (remaindr < 10)
			rtrn[count - 1] = 48 + remaindr;
		else
			rtrn[count - 1] = 55 + remaindr;
		quotient = quotient / base;
		count--;
	}
	return (rtrn);
}

char	*generate_str_ll_base(unsigned long long ll, int base)
{
	char				*rtrn;
	size_t				count;
	unsigned long long	dup_ll;

	count = 0;
	dup_ll = ll;
	if (ll == 0)
		return (ft_strdup("0"));
	while (ll != 0)
	{
		ll /= base;
		count++;
	}
	rtrn = malloc(sizeof(char) * (count + 1));
	rtrn[count] = '\0';
	if (!rtrn)
		return (0);
	rtrn = convert_base(dup_ll, base, rtrn, count);
	return (rtrn);
}
