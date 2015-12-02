/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:30:29 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/02 16:51:21 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	nb;

	nb = 0;
	while ((s1[nb] != '\0') & (s2[nb] != '\0') & (nb < n))
	{
		if (s1[nb] != s2[nb])
			return (0);
		nb++;
	}
	if (nb < n)
		if (s1[nb] != s2[nb])
			return (0);
	return (1);
}
