/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 13:10:01 by hsamir            #+#    #+#             */
/*   Updated: 2024-10-28 13:10:01 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
//     ft_lstadd_front(&lst_1, lst_4);
//     t_list* lst = lst_1;
//     while(lst)
//     {
//         printf("%s\n", lst->content);
//         lst = lst->next;
//     }

//     printf("last content : %s", ft_lstlast(lst_1)->content);

// }