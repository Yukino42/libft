/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 10:37:18 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:25:50 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 48) & (c <= 57)) | ((c >= 65) & (c <= 90)))
		return (1);
	else if ((c >= 97) & (c <= 122))
		return (1);
	else
		return (0);
}
