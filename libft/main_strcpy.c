/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:59:48 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:09:04 by rlemarch         ###   ########.fr       */
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
	d1 = ft_strcpy(d1, s);
	d2 = strcpy(d2, s);
	printf("%s\n%s\n%s\n", s, d1, d2);
	free(d1);
	free(d2);
	return (0);
}
