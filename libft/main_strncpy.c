/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 09:22:14 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:10:15 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*d1;
	char	*d2;

	s = "qwertyuiop";
	d1 = (char*)malloc(11 * sizeof(*d1));
	d2 = (char*)malloc(11 * sizeof(*d2));
	d1 = ft_strncpy(d1, s, 5);
	d2 = strncpy(d2, s, 5);
	printf("%s\n%s\n%s\n", s, d1, d2);
	free(d1);
	free(d2);
	return (0);
}
