/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:36:54 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/21 16:36:54 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_split_copy(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (ft_substr(s, 0, len));
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	s2 = malloc((ft_split_count(s, c) + 1) * sizeof(char *));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			s2[j] = ft_split_copy(&s[i], c);
			if (s2[j] == NULL)
			{
				while (j > 0)
					free(s2[--j]);
				free(s2);
				return NULL;
			}
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	s2[j] = NULL;
	return (s2);
}
