/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 15:49:37 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/05 15:51:07 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned long	i;

	i = 1;
	if (n < 0)
		write(fd, "-", 1);
	if (n == 0)
		write(fd, "0", 1);
	while (n / i != 0)
		i = i * 10;
	while (i > 1)
	{
		if (n < 0)
		{
			c = (char)(-(((n % i) - (n % (i / 10))) / (i / 10)) + 48);
			write(fd, &c, 1);
			n = -n;
		}
		else
		{
			c = (char)((((n % i) - (n % (i / 10))) / (i / 10)) + 48);
			write(fd, &c, 1);
		}
		i = i / 10;
	}
}
