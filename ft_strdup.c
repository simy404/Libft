/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:00:35 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/22 23:00:35 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	dup_str = (char *)malloc(s_len + 1);
	if (!dup_str)
		return (0);
	ft_strlcpy(dup_str, s, s_len + 1);
	return (dup_str);
}
