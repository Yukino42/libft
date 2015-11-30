/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:57:27 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/30 17:13:32 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		res;
	int		n;
	int		o;

	n = 0;
	res = 0;
	o = 0;
	while (str[n] < '!')
		n++;
	if (str[n] == '-')
	{
		o = n;
		n++;
	}
	while((str[n] >= '0') & (str[n] <= '9'))
	{
		res = (res * 10) + (int)(str[n] - 48);
		n++;
	}
	if (str[o] == '-')
		res = -res;
	return (res);
}
