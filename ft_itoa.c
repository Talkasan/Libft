/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:34:56 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/21 16:34:56 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(long nbr)
{
	int		digit;

	digit = 0;
	if (nbr == 0)
		digit = 1;
	while (nbr > 0)
	{
		nbr = (nbr / 10);
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		sgn;
	int		str_len;

	nbr = n;
	sgn = (nbr < 0);
	if (nbr < 0)
		nbr = -nbr;
	str_len = ft_digit(nbr) + sgn;
	str = malloc(str_len + 1);
	if (str == NULL)
		return (NULL);
	str[str_len] = '\0';
	while (str_len-- > sgn)
	{
		str[str_len] = (nbr % 10) + '0';
		nbr = (nbr / 10);
	}
	if (sgn)
		str[0] = '-';
	return (str);
}
