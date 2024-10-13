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
	char* s1_mem;
	char* s2_mem;

	if(!s1 || !s2 || n == 0)
		return (0);
	i = 0;
	s1_mem = (char*)s1;
	s2_mem = (char*)s2;

	while(s1_mem[i] == s2_mem[i] && i < n - 1)
	{
		i++;
	}

	return (s1_mem[i] - s2_mem[i]);
}

#include "string.h"
#include "stdio.h"

int main()
{
	// const void* s1 = "motive";
	// const void* s2 = "motives";
	int h = 6;
	int* i = &h;
	char str2[] = "abc\0xyz";

	printf("%d\n",ft_memcmp(i, str2, 6));
	//printf("%d\n",memcmp(str1, str2, 6));

	char s1[] = { 127, -128, 0 };
	char s2[] = { 127, 128, 0 };
	int result = ft_memcmp(s1, s2, 0);
	int result2 = memcmp(s1, s2, 0);
	printf("%d\n", result);
	printf("%d\n", result2);
}
