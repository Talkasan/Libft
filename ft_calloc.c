/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:29:24 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/29 20:24:34 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p_array;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	p_array = malloc(nmemb * size);
	if (p_array == NULL)
		return (NULL);
	ft_bzero(p_array, nmemb * size);
	return (p_array);
}
