/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:51:32 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/01 09:34:51 by rlemarch         ###   ########.fr       */
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
		d = isalpha(c);
		e = ft_isalpha(c);
		if ((d != 0) | (e != 0))
			printf("--%c %d %d %d--  ", (char)c, c, d, e);
		c++;
	}
	printf("\n\n");
	return (0);
}
