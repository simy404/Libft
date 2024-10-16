/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:04:28 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/16 13:04:28 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char* d;
	unsigned char* s;

	d = (unsigned char*)dest;
	s = (unsigned char*)src;

	if (!d && !s)
		return (0);
    if (!(d + n < s || s + n < d))
		return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}

	return (dest);
}

void	*ft_memcpy2(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include "stdio.h"
#include "string.h"
int main()
{
	char src[] = "this is a test";
	char* t2 = NULL;
	char* t1 = NULL;
	char dest[25];
	//memcpy(src + 5, src, 5);
	char* result = memcpy(src, t2, 0);
	if(result)
		printf("%s", result);
	else
		printf("returned null\n");
}
