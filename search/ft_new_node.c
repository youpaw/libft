#include "search_lib.h"
#include "mem_lib.h"

t_avl				*ft_new_node(void *key, void *payload)
{
	t_avl *node;

	node = (t_avl*)ft_xmalloc(sizeof(t_avl));
	node->key = key;
	node->payload = payload;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return (node);
}
