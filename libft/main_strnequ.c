/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:31:23 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/02 16:51:58 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	n = 0;
	s1 = "qwertyuiop";
	s2 = "qwert";
	n = ft_strnequ(s1, s2, 5);
	printf("\n%ld\n\n" , n);
	return (0);
}
