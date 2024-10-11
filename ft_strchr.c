/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:10:36 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/07 21:10:37 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (!s || c < 0)
    {
        return ((char*)0);
    }


    while(s[i] && s[i] != c)
    {
        i++;
    }

    return ((char*)s + i);
}



