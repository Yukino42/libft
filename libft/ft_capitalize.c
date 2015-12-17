/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 17:43:47 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/15 18:06:41 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_capitalize(char *str)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		c = 0;
		b = ft_isalpha(str[a]);
		c = ft_isalpha(str[a + 1]);
		if ((b == 0) & (c == 1))
			str[a + 1] = (char)ft_toupper((int)str[a + 1]);
		a++;
	}
	return (str);
}
