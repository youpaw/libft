/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:57 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:57 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"
#include "ft_mem.h"

t_list	*ft_lst_new(void *content, size_t size)
{
	t_list	*newlst;

	newlst = (t_list *)ft_xmalloc(sizeof(t_list));
	if (!content)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	else
	{
		newlst->content = ft_xmalloc(size);
		newlst->content = ft_memmove(newlst->content, content, size);
		newlst->content_size = size;
	}
	newlst->next = NULL;
	return (newlst);
}
