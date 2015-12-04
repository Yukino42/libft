/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 09:40:09 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/03 09:59:24 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*c;
	int		n1;
	size_t	n2;

	n1 = 3;
	n2 = 5;
	s = "qwertyuiop";
	c = (char*)malloc(11 * sizeof(*c));
	c = ft_strsub(s, n1, n2);
	printf("\n%s\n\n%d - %ld\n\n%s\n\n", s, n1, n2, c);
	return (0);
}
