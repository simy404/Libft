/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 11:40:44 by hsamir            #+#    #+#             */
/*   Updated: 2024-10-29 11:40:44 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_mem;
	unsigned char	*s2_mem;

	i = 0;
	s1_mem = (unsigned char *)s1;
	s2_mem = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_mem[i] != s2_mem[i])
			return (s1_mem[i] - s2_mem[i]);
		i++;
	}
	return (0);
}
