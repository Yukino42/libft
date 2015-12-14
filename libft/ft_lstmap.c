/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:57:51 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/14 17:42:58 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*ptr;
	t_list	*res;
	char	*str;

	ptr = NULL;
	res = NULL;
	str = "q";
	if (lst == NULL)
		str[0] = str[2];
	while (lst != NULL)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		if (new == NULL)
			return (NULL);
		new = f(new);
		if (ptr != NULL)
			ptr->next = new;
		if (res == NULL)
			res = new;
		lst = lst->next;
		ptr = new;
	}
	return (res);
}
