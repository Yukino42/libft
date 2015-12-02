/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 10:37:21 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/01 10:53:23 by rlemarch         ###   ########.fr       */
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
		d = isalnum(c);
		e = ft_isalnum(c);
		if ((d !=0) | (e != 0))
			printf("--%c %d %d %d--  ", (char)c, c, d, e);
		c++;
	}
	printf("\n\n");
	return (0);
}
