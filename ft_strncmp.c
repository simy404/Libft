/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:17:11 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/11 20:17:11 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (!s1 || !s2)
	{
		return (0);
	}

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
}

#include <string.h>
#include <stdio.h>
int main()
{
	char *s1 = 0;
	char *s2 = "Hello";
	size_t n = 2;

	int val1 = strncmp(s1, s2, n);
	int val2 = ft_strncmp(s1, s2, n);
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
