/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:45:34 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/03 19:35:30 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	**res;

	printf("A\n");
	res = (char**)malloc(10 * sizeof(**res));
	printf("B\n");
	s1 = "vive le code";
	res = ft_strsplit(s1, ' ');
	printf("C\n");
	printf("\n%s\n%s\n%s\nD\n\n", res[0], res[1], res[2]);
	return (0);
}
