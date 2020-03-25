#include "search_lib.h"
#include "math_lib.h"

static t_avl		*ft_balance(t_avl *node, void *params, \
int (*cmp)(const void *, const void *, void *))
{
	int balance;

	balance = ft_get_balance(node);
	if (balance > 1 && cmp(node->left->content, node->content, params) < 0)
		return (ft_right_rotate(node));
	if (balance < -1 && cmp( node->right->content, node->content, params) > 0)
		return (ft_left_rotate(node));
	if (balance > 1 && cmp(node->left->content, node->content, params) > 0)
	{
		node->left = ft_left_rotate(node->left);
		return (ft_right_rotate(node));
	}
	if (balance < -1 && cmp(node->right->content, node->content, params) < 0)
	{
		node->right = ft_right_rotate(node->right);
		return (ft_left_rotate(node));
	}
	return (node);
}

t_avl				*ft_insert_avl(t_avl *node, t_avl *new, void *params, \
int (*cmp)(const void *, const void *, void *))
{
	if (!node)
		return (new);
	if (cmp(new->content, node->content, params) < 0)
		node->left = ft_insert_avl(node->left, new, params, cmp);
	else
		node->right = ft_insert_avl(node->right, new, params, cmp);
	node->height = (int) ft_max(ft_get_height(node->left), \
	ft_get_height(node->right)) + 1;
	return (ft_balance(node, params, cmp));
}
