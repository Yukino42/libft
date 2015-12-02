/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:21:22 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/01 12:25:22 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int     c;
	int     d;
	int     e;

	c = 0;
	d = 0;
	e = 0;
	printf("\n");
	while (c <=255)
	{
		d = tolower(c);
		e = ft_tolower(c);
		if (d != c)
			printf("%c %d-%c %d", (char)c, c, (char)d, d);
		if (e != c)
			printf("--\n");
		c++;
	}
	printf("\n");
}
