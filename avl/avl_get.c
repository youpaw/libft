/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:56:18 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:56:20 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_avl.h"

t_avl_tree	*walk_nodes(const void *key, t_avl_tree *node, \
	int (*cmp)(const void *, const void *))
{
	int cmp_val;

	if (!node)
		return (NULL);
	cmp_val = cmp(key, node->pair->key);
	if (cmp_val < 0)
		return (walk_nodes(key, node->left, cmp));
	else if (cmp_val > 0)
		return (walk_nodes(key, node->right, cmp));
	return (node);
}

t_avl_tree	*ft_avl_get(t_avl_obj *obj, const void *key)
{
	if (!obj || !obj->tree || !key)
		return (NULL);
	return (walk_nodes(key, obj->tree, obj->cmp));
}
