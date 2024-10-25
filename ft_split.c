/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:25:35 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/24 09:25:35 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_count(const char* s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char ** arr;
	int i;
	int word_len;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!arr)
		return (0);
	while(*s)
	{
		if (*s == c)
			s++;
		else
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			arr[i] = ft_substr(s, 0, word_len);
			s += word_len;
			i++;
		}
	}
	arr[i] = 0;
	return (arr);
}
