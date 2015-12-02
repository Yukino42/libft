/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 11:33:54 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/01 11:43:56 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		c;
	int		d;
	int		e;

	c = 0;
	d = 0;
	e = 0;
	printf("\n");
	while (c <= 255)
	{
		d = isprint(c);
		e = ft_isprint(c);
		if (d != 0)
			printf("%d", c);
		if (e != 0)
			printf("--\n");
		c++;
	}
	printf("\n");
}
