/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:19:52 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/29 12:53:27 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	first_len_dst;
	size_t	len_src;

	first_len_dst = 0;
	while (dst[first_len_dst] && first_len_dst < size)
		first_len_dst++;
	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	i = 0;
	while (src[i] && (first_len_dst + i + 1) < size)
	{
		dst[first_len_dst + i] = src[i];
		i++;
	}
	if (first_len_dst < size)
	{
		dst[first_len_dst + i] = '\0';
		return (first_len_dst + len_src);
	}
	return (size + len_src);
}
