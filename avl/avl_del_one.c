//
// Created by youpaw on 02.06.2020.
//

#include <stdlib.h>
#include "cc_avl.h"
#include "cc_math.h"

static t_avl_tree	*insert_node(t_avl_tree *new, t_avl_tree *node,\
	int (*cmp)(const void *, const void *))
{
	int cmp_val;

	cmp_val = cmp(new->pair->key, node->pair->key);
	if (cmp_val < 0)
		node->left = insert_node(new, node->left, cmp);
	else if (cmp_val > 0)
		node->right = insert_node(new, node->right, cmp);
	node->height = (int)max(avl_get_height(node->left), \
    avl_get_height(node->right)) + 1;
	return (avl_balance(node, cmp));
}

static t_avl_tree		*merge_childs(t_avl_tree *node, \
	int (*cmp)(const void *, const void *))
{
	if (!node->left && !node->right)
		return (NULL);
	else if (node->left && !node->right)
		return (node->left);
	else if (!node->left)
		return (node->right);
	return (insert_node(node->right, node->left, cmp));
}

static t_avl_tree 		*del_node(t_avl_tree *node, const void *key, \
	int (*cmp)(const void *, const void *))
{
	int		cmp_val;

	cmp_val = cmp(key, node->pair->key);
	if (cmp_val < 0)
		node->left = del_node(node->left, key, cmp);
	else if (cmp_val > 0)
		node->right = del_node(node->right, key, cmp);
	else
		return (merge_childs(node, cmp));
	node->height = (int)max(avl_get_height(node->left), \
    avl_get_height(node->right)) + 1;
	return (avl_balance(node, cmp));
}

int					avl_del_one(t_avl_obj *obj, const void *key)
{
	t_avl_tree *node;

	if (!(node = avl_get(obj, key)))
		return (AVL_DNE);
	obj->tree = del_node(obj->tree, key, obj->cmp);
	if (obj->del)
		obj->del(node->pair);
	free(node->pair);
	free(node);
	return (AVL_OK);
}