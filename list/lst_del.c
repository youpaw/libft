/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:13 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:13 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int	ft_lst_del(t_list **alst, void (*del)(void *))
{
	t_list	*tmp;

	if (!alst)
		return (-1);
	while (*alst)
	{
		tmp = (*alst)->next;
		ft_lst_del_one(alst, del);
		*alst = tmp;
	}
	return (0);
}
