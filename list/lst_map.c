/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:58 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:58 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_list	*ft_lst_map(t_list *lst, t_list *f(t_list *elem))
{
	if (lst && f)
	{
		lst->next = ft_lst_map(lst->next, f);
		return (f(lst));
	}
	return (NULL);
}
