/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:45:34 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/04 14:19:02 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	**res;

	res = (char**)malloc(10 * sizeof(**res));
	s1 = "            vive            le            code          ";
	res = ft_strsplit(s1, ' ');
	if (res == NULL)
		printf("NULL");
	printf("\n%s\n\n%s\n%s\n%s\n\n", s1, res[0], res[1], res[2]);
	return (0);
}
