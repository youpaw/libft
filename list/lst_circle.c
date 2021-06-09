/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_circle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:15 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:15 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int	ft_lst_circle(t_list *list)
{
	t_list	*head;

	if (!list)
		return (-1);
	head = list;
	while (list->next)
		list = list->next;
	list->next = head;
	return (0);
}
