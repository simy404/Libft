/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:58:22 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/14 13:02:21 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_match(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (big[i] && little[i] && big[i] == little[i] && len-- > 0)
	{
		i++;
		if (!little[i])
			return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big || !little)
		return (0);
	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && len > 0)
	{
		if (big[i] == little[0])
		{
			if (is_match((big + i), little, len - i))
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
