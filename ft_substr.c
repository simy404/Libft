/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:37:18 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/21 21:37:18 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *me;
	size_t i;
	size_t s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if(len > s_len - start)
		len = s_len - start;
	if (!s || !(me = (char *)malloc(len + 1)))
		return (0);
	while(start < s_len && i < len)
		me[i++] = s[start++];
	me[i] = '\0';
	return (me);
}


// #include <stdio.h>
// int main()
// {
// 	char *s = "Hello World!";
// 	printf("%s\n", ft_substr(s, 6, 5));
// 	printf("%s\n", ft_substr3(s, 6, 5));
// 	return 0;
// }
