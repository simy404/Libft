/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:37:16 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/13 16:37:16 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char* s1_mem;
	unsigned char* s2_mem;

	if(!s1 || !s2 || n == 0)
		return (0);
	i = 0;
	s1_mem = (unsigned char*)s1;
	s2_mem = (unsigned char*)s2;

	while(s1_mem[i] == s2_mem[i] && i < n - 1)
	{
		i++;
	}

	return (s1_mem[i] - s2_mem[i]);
}
