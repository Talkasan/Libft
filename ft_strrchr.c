/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:28:21 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/29 13:23:23 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last_c;
	
	i = 0;
	last_c = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_c = (char *)s + i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (last_c);
}
