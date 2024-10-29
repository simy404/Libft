/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/27 21:13:56 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/27 21:13:56 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mem;

	mem = malloc(sizeof(t_list));
	if (!mem)
		return (0);
	mem->content = content;
	mem->next = NULL;
	return (mem);
}
