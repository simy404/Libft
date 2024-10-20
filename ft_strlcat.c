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

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    char *dst_mem;
    char* src_mem;

    src_mem = (char*)src;
    dst_mem = dst;
    while(*dst)
    {
        dst++;
    }
    while(*src_mem && dstsize-- > 1)
        *dst++ = *src_mem++;
    *dst = '\0';
    return (ft_strlen(dst_mem));
}