/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_map_prefix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:32 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:51:32 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_avl.h"

static void	walk_nodes(t_avl_tree *node, void (*f)(void *))
{
	if (!node)
		return ;
	f(node->pair->value);
	walk_nodes(node->left, f);
	walk_nodes(node->right, f);
}

void	ft_avl_map_prefix(t_avl_obj *obj, void (*f)(void *))
{
	if (!obj || !f)
		return ;
	walk_nodes(obj->tree, f);
}
