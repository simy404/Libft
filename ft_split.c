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

#include <stdlib.h>
#include "libft.h"

static int	letter_count(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i += letter_count(s + i, c);
		}
		else
			i++;
	}
	return (count);
}

static char	**free_arr(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (!s)
		return (0);
	arr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!arr)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			arr[i] = ft_substr(s, 0, letter_count(s, c));
			if (!arr[i])
				return (free_arr(arr, i - 1));
			s += letter_count(s, c);
			i++;
		}
	}
	arr[i] = 0;
	return (arr);
}
