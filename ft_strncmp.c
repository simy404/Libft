/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/11 20:17:11 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/11 20:17:11 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2 || n == 0)
	{
		return (0);
	}
	i = 0;
	while ((s1[i] && s2[i]) && ((unsigned char)s1[i] == (unsigned char)s2[i])
		&& (i < n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
