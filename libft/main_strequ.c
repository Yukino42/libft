/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:02:02 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/02 16:19:25 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	n = 0;
	s1 = "qwertyuiop";
	s2 = "qwertyuiop";
	n = ft_strequ(s1, s2);
	printf("\n%d\n\n" , n);
	return (0);
}
