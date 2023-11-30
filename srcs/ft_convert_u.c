/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:08:01 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/30 16:20:34 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	count_len(unsigned int n);

static char	*generate_unsigned(unsigned int n)
{
	char	*str;
	int		len;

	len = count_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (len && n != 0)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str);
}

static int	count_len(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

int	ft_convert_u(unsigned int d)
{
	int		len;
	char	*ret;

	len = 0;
	ret = generate_unsigned(d);
	len = ft_strlen(ret);
	ft_putstr_fd(ret, 1);
	free(ret);
	return (len);
}
