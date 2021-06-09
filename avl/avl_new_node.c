/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_new_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:27 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 17:09:53 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_avl.h"
#include "ft_mem.h"

t_avl_tree	*ft_avl_new_node(t_avl_pair *pair)
{
	t_avl_tree	*node;

	node = (t_avl_tree *)ft_xmalloc(sizeof(t_avl_tree));
	node->pair = (t_avl_pair *)ft_xmalloc(sizeof(t_avl_pair));
	ft_memmove(node->pair, pair, sizeof(t_avl_pair));
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return (node);
}
