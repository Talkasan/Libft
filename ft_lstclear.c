/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:15:53 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/29 21:47:34 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
}
