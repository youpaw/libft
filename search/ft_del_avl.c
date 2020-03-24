//
// Created by youpaw on 17.03.2020.
//

#include <stdlib.h>
#include "search_lib.h"
#include "mem_lib.h"

void	ft_del_avl(t_avl *avl, size_t size, void (*del)(void *, size_t))
{
	if (!avl)
		return ;
	ft_del_avl(avl->left, size, del);
	ft_del_avl(avl->right, size, del);
	del(avl->content, size);
	free(avl);
	ft_bzero(avl, sizeof(t_avl));
}
