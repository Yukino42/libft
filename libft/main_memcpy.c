/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:25:23 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:04:56 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = "qwertyuiop";
	b = malloc(100);
	c = malloc(100);
	b = ft_memcpy(b, a, 11);
	c = memcpy(c, a, 11);
	write(1, b, 11);
	write(1, "\n", 1);
	write(1, c, 11);
	write(1, "\n", 1);
	return (0);
}
