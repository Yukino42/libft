/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:40:27 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/04 17:25:08 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		n;
	char	*c;

	n = 0;
	c = (char*)malloc(6 * sizeof(*c));
	c = ft_itoa(n);
	printf("\n%d\n%s\n", n, c);
	printf("%c\n\n", c[6]);
	return (0);
}
