/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_find.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:05 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:05 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_list	*ft_lst_find(t_list *lst, const void *content, \
	int (*cmp)(const void *, const void *))
{
	t_list	*next;

	if (!lst || !cmp || !content)
		return (NULL);
	while (lst != 0)
	{
		next = lst->next;
		if (cmp(lst->content, content) == 0)
			return (lst);
		lst = next;
	}
	return (NULL);
}
