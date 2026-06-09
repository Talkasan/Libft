/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalkasa <taalkasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:34:24 by taalkasa          #+#    #+#             */
/*   Updated: 2026/01/30 08:09:22 by taalkasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	**crrnt;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	crrnt = &new_lst;
	while (lst != NULL)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
			return (del(content), ft_lstclear(&new_lst, del), NULL);
		*crrnt = new_node;
		crrnt = &new_node->next;
		lst = lst->next;
	}
	return (new_lst);
}
