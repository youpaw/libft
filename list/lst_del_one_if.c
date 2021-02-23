/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del_one_if.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:59:24 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:59:26 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"
#include <stdlib.h>

int		ft_lst_del_one_if(t_list **alst, const void *content,\
			int (*cmp)(const void *, const void *),\
			void (*del)(void *))
{
	t_list *prev;
	t_list *head;

	if (!alst || !*alst || !del || !content)
		return (1);
	head = *alst;
	prev = NULL;
	while (*alst && cmp((*alst)->content, content) != 0)
	{
		prev = *alst;
		*alst = (*alst)->next;
	}
	if (*alst)
	{
		if (*alst == head)
			head = head->next;
		else
			prev->next = (*alst)->next;
        ft_lst_del_one(alst, del);
		*alst = head;
		return (0);
	}
	*alst = head;
	return (1);
}
