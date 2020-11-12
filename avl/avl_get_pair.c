/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_get_pair.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:56:10 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:56:12 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_avl.h"

t_avl_pair	*avl_get_pair(t_avl_obj *obj, const void *key)
{
	t_avl_tree *node;

	if ((node = avl_get(obj, key)))
		return (node->pair);
	return (NULL);
}
