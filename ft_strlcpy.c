/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 00:54:46 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/19 00:54:47 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	// while (*src && dstsize-- > 1)
	// 	*dst++ = *src++;
	// *dst = '\0';
	// return (ft_strlen(src));

	size_t i;
	size_t size;
	if(!dst || !src)
		return 0;
	i = 0;
	size = ft_strlen(dst);
	while(size + i < dstsize - 1 && src[i]) // -> 5 + 2 < 7
	{
		dst[size + i] = src[i];
		i++;
	}
	dst[size + i] = '\0';

	return (size + i);

}

#include "string.h"
#include "stdio.h"
int main()
{
	char* src = "123456789";
	char dest[13] = "12345";
	size_t test = ft_strlcpy(dest, src, sizeof(dest));
	printf("str : %s,test:  %zu ", dest, test);
}