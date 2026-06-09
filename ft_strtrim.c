/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:37:21 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/21 16:37:21 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strtrim_in_set(char a, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	l_trim;
	size_t	r_trim;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	l_trim = 0;
	r_trim = ft_strlen(s1);
	while (s1[l_trim] && ft_strtrim_in_set(s1[l_trim], set))
		l_trim++;
	while (r_trim > l_trim && ft_strtrim_in_set(s1[r_trim - 1], set))
		r_trim--;
	s2 = malloc(r_trim - l_trim + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (r_trim > l_trim)
		s2[i++] = s1[l_trim++];
	s2[i] = '\0';
	return (s2);
}
