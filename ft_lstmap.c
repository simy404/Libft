/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 17:57:27 by hsamir            #+#    #+#             */
/*   Updated: 2024-10-28 17:57:27 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*root;
	t_list	*next;
	void	*content;

	if (!lst || !f)
		return (0);
	root = 0;
	next = 0;
	while (lst)
	{
		content = f(lst->content);
		next = ft_lstnew(content);
		if (!next)
		{
			(*del)(content);
			ft_lstclear(&root, del);
			return (0);
		}
		ft_lstadd_back(&root, next);
		lst = lst->next;
	}
	return (root);
}
