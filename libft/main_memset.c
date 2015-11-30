/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 08:45:47 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:05:00 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*b;
	char	*c;
	int		d;
	int		e;

	d = 65;
	e = 100;
	b = malloc(e);
	c = malloc(e);
	b = ft_memset(b, d, e);
	c = memset(c, d, e);
	write(1, b, e);
	write(1, "\n", 1);
	write(1, c, e);
	write(1, "\n", 1);
	free(b);
	free(c);
	return (0);
}
