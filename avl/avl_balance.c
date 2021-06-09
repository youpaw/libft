/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_balance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:45 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:51:45 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_avl.h"
#include "ft_math.h"

static t_avl_tree	*right_rotate(t_avl_tree *y)
{
	t_avl_tree	*x;
	t_avl_tree	*t;

	x = y->left;
	t = x->right;
	x->right = y;
	y->left = t;
	y->height = (int)ft_max(ft_avl_get_height(x->right), \
	ft_avl_get_height(x->left)) + 1;
	y->height = (int)ft_max(ft_avl_get_height(y->right), \
	ft_avl_get_height(y->left)) + 1;
	return (x);
}

static t_avl_tree	*left_rotate(t_avl_tree *x)
{
	t_avl_tree	*y;
	t_avl_tree	*t;

	y = x->right;
	t = y->left;
	y->left = x;
	x->right = t;
	y->height = (int)ft_max(ft_avl_get_height(x->right), \
	ft_avl_get_height(x->left)) + 1;
	y->height = (int)ft_max(ft_avl_get_height(y->right), \
	ft_avl_get_height(y->left)) + 1;
	return (y);
}

t_avl_tree	*ft_avl_balance(t_avl_tree *node, \
int (*cmp)(const void *, const void *))
{
	int	balance;

	if (!node)
		return (node);
	balance = ft_avl_get_height(node->left) - ft_avl_get_height(node->right);
	if (balance > 1 && cmp(node->left->pair->key, node->pair->key) < 0)
		return (right_rotate(node));
	if (balance < -1 && cmp(node->right->pair->key, node->pair->key) > 0)
		return (left_rotate(node));
	if (balance > 1 && cmp(node->left->pair->key, node->pair->key) > 0)
	{
		node->left = left_rotate(node->left);
		return (right_rotate(node));
	}
	if (balance < -1 && \
		cmp(node->right->pair->key, node->pair->key) < 0)
	{
		node->right = right_rotate(node->right);
		return (left_rotate(node));
	}
	return (node);
}
