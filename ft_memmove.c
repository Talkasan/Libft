/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:31:43 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/29 12:18:58 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (dest == NULL && src == NULL)
		return (NULL);
	p1 = (unsigned char *)src;
	p2 = (unsigned char *)dest;
	if (p2 < p1)
	{
		i = 0;
		while (i < n)
		{
			p2[i] = p1[i];
			i++;
		}
	}
	else if (p2 >= p1)
	{
		while (n--)
			p2[n] = p1[n];
	}
	return (dest);
}
