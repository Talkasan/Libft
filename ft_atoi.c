/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:13:46 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/29 14:40:33 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sgn;
	int		rslt;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sgn = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sgn = -1;
		i++;
	}
	rslt = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		rslt = (nptr[i] - '0') + (rslt * 10);
		i++;
	}
	return (rslt * sgn);
}
