/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_map_prefix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:57:04 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:57:06 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_avl.h"

static void		walk_nodes(t_avl_tree *node, void (*f)(void *))
{
	if (!node)
		return ;
	f(node->pair->value);
	walk_nodes(node->left, f);
	walk_nodes(node->right, f);
}

void			avl_map_prefix(t_avl_obj *obj, void (*f)(void *))
{
	if (!obj || !f)
		return ;
	walk_nodes(obj->tree, f);
}
