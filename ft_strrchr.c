/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:59:26 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/11 19:59:26 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen((char*)s) - 1;

    if (!s || c < 0)
    {
        return ((char*)0);
    }


    while(s[i] && s[i] != c)
    {
        i--;
    }

    return ((char*)s + i);
}

