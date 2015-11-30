/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:35:34 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:04:49 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*b;
	char	*c;
	int		d;

	d = 100;
	b = malloc(d);
	c = malloc(d);
	ft_bzero(b, d);
	bzero(c, d);
	write(1, b, d);
	write(1, "\n", 1);
	write(1, c, d);
	write(1, "\n", 1);
	free(b);
	free(c);
	return (0);
}
