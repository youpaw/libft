//
// Created by youpaw on 17.03.2020.
//

#include <stdlib.h>
#include "search_lib.h"

void	ft_del_avl(t_avl **avl, void (*del)(void *))
{
	if (!avl || !*avl)
		return ;
	ft_del_avl(&((*avl)->left), del);
	ft_del_avl(&((*avl)->right), del);
	del(&((*avl)->content));
	free(*avl);
	*avl = NULL;
}
