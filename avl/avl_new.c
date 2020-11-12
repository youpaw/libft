/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:57:14 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:57:17 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "cc_avl.h"
#include "cc_mem.h"

t_avl_obj			*avl_new(int (*cmp)(const void *, const void *), \
	void (*del)(void *))
{
	t_avl_obj		*obj;

	if (!cmp)
		return (NULL);
	obj = xmalloc(sizeof(t_avl_obj));
	obj->cmp = cmp;
	obj->del = del;
	obj->tree = NULL;
	return (obj);
}
