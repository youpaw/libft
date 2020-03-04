#include "search_lib.h"
#include "math_lib.h"

static t_avl		*ft_balance(t_avl *node, int (*cmp)(void *, void *))
{
	int balance;

	balance = ft_get_balance(node);
	if (balance > 1 && cmp(node->key, node->left->key) < 0)
		return (ft_right_rotate(node));
	if (balance < -1 && cmp(node->key, node->right->key) > 0)
		return (ft_left_rotate(node));
	if (balance > 1 && cmp(node->key, node->left->key) > 0)
	{
		node->left = ft_left_rotate(node->left);
		return (ft_right_rotate(node));
	}
	if (balance < -1 && cmp(node->key, node->right->key) < 0)
	{
		node->right = ft_right_rotate(node->right);
		return (ft_left_rotate(node));
	}
	return (node);
}

t_avl				*ft_insert_avl(t_avl *node, void *key, void *payload, \
int (*cmp)(void *, void *))
{
	if (!node)
		return(ft_new_node(key, payload));
	if (cmp(key, node->key) < 0)
		node->left = ft_insert_avl(node->left, key, payload, cmp);
	else if (cmp(key, node->key) > 0)
		node->right = ft_insert_avl(node->right, key, payload, cmp);
	else
		return (node);
	node->height = (int) ft_max(ft_get_height(node->left), \
	ft_get_height(node->right)) + 1;
	return (ft_balance(node, cmp));
}