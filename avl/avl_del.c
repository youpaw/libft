/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:44 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:51:44 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_avl.h"

static void	walk_nodes(t_avl_tree *node, void (*del)(void *))
{
	if (!node)
		return ;
	walk_nodes(node->left, del);
	walk_nodes(node->right, del);
	if (del)
		del(node->pair);
	free(node->pair);
	free(node);
}

void	ft_avl_del(t_avl_obj **obj)
{
	if (!obj || !*obj)
		return ;
	walk_nodes((*obj)->tree, (*obj)->del);
	free(*obj);
	*obj = NULL;
}
