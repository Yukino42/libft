/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 09:25:25 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/05 11:30:30 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		nbr;
	int		i;

	nbr = 0;
	i = 0;
	for (i = 0;i < 10;i++)
	{
	   	nbr = rand();
		ft_putnbr(nbr);
		printf("\n");
	}
		return (0);
}
