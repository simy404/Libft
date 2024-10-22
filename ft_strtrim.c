/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:53:32 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/21 20:53:32 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int get_first_position(char const *str, char const *set)
{
	int i;

	i = 0;
	while(str[i] && is_in_set(str[i], set))
		i++;
	return (i);
}

int get_last_position(char const *str, char const *set)
{
	int i;

	i = ft_strlen(str) - 1;
	while(str[i] && is_in_set(str[i], set))
		i--;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int start;
	int end;
	int len;

	if (!s1)
		return (0);
	start = get_first_position(s1, set);
	end = get_last_position(s1, set);
	if (start > end)
		return (malloc(1));
	len = end - start + 1;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}

// // here the main function to test the function
// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strtrim(" ,*+  lorem ipsum dolor sit amet   ", " ,*+"));
// }
