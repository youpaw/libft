/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:16 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:16 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int			ft_lst_add_sort(t_list **list, t_list *newlist, \
				int (*cmp)(const void *, const void *))
{
	t_list *prev;
	t_list *head;

	if (!list || !newlist || !cmp)
		return (-1);
	if (!*list)
	{
		*list = newlist;
		return (0);
	}
	prev = NULL;
	head = *list;
	while (head && cmp(newlist->content, head->content) > 0)
	{
		prev = head;
		head = head->next;
	}
	newlist->next = head;
	if (!prev)
		*list = newlist;
	else
		prev->next = newlist;
	return (0);
}
