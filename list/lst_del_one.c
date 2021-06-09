/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:08 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:08 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int	ft_lst_del_one(t_list **alst, void (*del)(void*))
{
	if (!alst)
		return (-1);
	if (!*alst)
		return (0);
	if ((*alst)->content && del)
		del((*alst)->content);
	free((*alst)->content);
	free(*alst);
	*alst = NULL;
	return (0);
}
