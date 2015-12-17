/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:30:41 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:27:45 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*v;
	int		*r;
	size_t	n;

	n = 0;
	v = malloc(size);
	if (v == NULL)
		return (NULL);
	r = v;
	while (n < size)
	{
		r[n] = 0;
		n++;
	}
	return (v);
}
