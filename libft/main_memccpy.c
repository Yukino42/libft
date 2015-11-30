/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:17:56 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:04:52 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	d;

	a = "qwertyuiop";
	b = malloc(100);
	c = malloc(100);
	b = ft_memset(b, 65, 11);
	c = ft_memset(c, 65, 11);
	d = 'y';
	b = ft_memccpy(b, a, d, 11);
	c = memccpy(c, a, d, 11);
	write(1, b, 11);
	write(1, "\n", 1);
	write(1, c, 11);
	write(1, "\n", 1);
	return (0);
}
