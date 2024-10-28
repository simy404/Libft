/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 13:23:43 by hsamir            #+#    #+#             */
/*   Updated: 2024-10-28 13:23:43 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!*lst)
		*lst = new;
	else
	{
		list = *lst;
		while (list->next)
			list = list->next;
		list->next = new;
	}
}

// #include "stdio.h"
// int main()
// {
//     t_list* lst_1 = ft_lstnew("1");
//     t_list* lst_2 = ft_lstnew("2");
//     t_list* lst_3 = ft_lstnew("3");
//     t_list* lst_4 = ft_lstnew("4");

//     lst_1->next = lst_2;
//     lst_2->next = lst_3;
//     ft_lstadd_back(&lst_1, lst_4);
//     t_list* lst = lst_1;
//     while(lst)
//     {
//         printf("%s\n", lst->content);
//         lst = lst->next;
//     }

//     printf("last content : %s", ft_lstlast(lst_1)->content);

// }