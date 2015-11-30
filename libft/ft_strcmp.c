/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:48:04 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/30 11:39:33 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*st1;
	unsigned char	*st2;
	int				nb;
	int				res;

	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	res = 0;
	nb = 0;
	while ((st1[nb] != '\0') & (st2[nb] != '\0'))
	{
		res = (st1[nb] - st2[nb]);
		if (res != 0)
			return (res);
		nb++;
	}
	res = (st1[nb] - st2[nb]);
	return (res);
}
