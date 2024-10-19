/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:27:41 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/13 14:27:41 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *)s;
	if (!s)
		return (0);
	while (mem[i] && i < n)
	{	
		if (mem[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

#include "stdio.h"
#include "string.h"
int main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("%s", (char*)memchr(s, 0 ,1));
}