//
// Created by Azzak Omega on 8/26/20.
//
#include "cc_lst.h"

size_t				lst_get_size(const t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

