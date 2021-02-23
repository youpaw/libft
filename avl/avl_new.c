/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:30 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:51:30 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_avl.h"
#include "ft_mem.h"

t_avl_obj			*ft_avl_new(int (*cmp)(const void *, const void *), \
	void (*del)(void *))
{
	t_avl_obj		*obj;

	if (!cmp)
		return (NULL);
	obj = ft_xmalloc(sizeof(t_avl_obj));
	obj->cmp = cmp;
	obj->del = del;
	obj->tree = NULL;
	return (obj);
}
