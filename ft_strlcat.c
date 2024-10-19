/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 06:40:48 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/19 06:40:49 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
    char *dst_mem;

    dst_mem = dst;
    while(*dst++)

    while(*src && dstsize-- > 1)
        *dst++ = *src++;
    *dst = '\0';
    return (ft_strlen(dst_mem));
}