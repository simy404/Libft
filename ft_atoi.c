/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:53:53 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/07 21:53:55 by hsamir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int iterate_space(const char *c)
{
	int i;

	i = 0;
	while (c[i] == ' ' || (c[i] >= 9 && c[i] <= 13))
		i++;
	return (i);
}

int get_sign(const char *c, int *i)
{
	int count;

	count = 0;
	while (c[*i] == '-' || c[*i] == '+')
	{
		if (c[*i] == '-')
			count++;
		*i = *i + 1;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int ft_atoi(const char *str)
{
	int total;
	int sign;
	int i;

	total = 0;
	i = iterate_space(str);
	sign = get_sign(str, &i);
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		total = total * 10 + str[i] - '0';
		i++;
	}
	return (sign * total);
}
