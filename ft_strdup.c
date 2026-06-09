/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:10:55 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/29 14:50:14 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s) + 1;
	dst = malloc(s_len);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s, s_len);
	return (dst);
}
