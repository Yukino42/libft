/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:02:49 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/03 15:26:40 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*c;

	s = " \n\tqwertyuiop\t\n ";
	c = (char*)malloc(11 * sizeof(*c));
	c = ft_strtrim(s);
	printf("\n%s\n%s\n\n", s, c);
	return (0);
}
