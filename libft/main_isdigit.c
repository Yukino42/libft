/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 09:38:07 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/01 09:50:33 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int 	c;
	int		d;
	int		e;

	c = 0;
	d = 0;
	e = 0;
	while (c <= 255)
	{
		d = isdigit(c);
		e = ft_isdigit(c);
		if (d != 0)
			printf("--%c %d %d %d--  ", (char)c, c, d, e);
		c++;
	}
	printf("\n\n");
	return (0);
}
