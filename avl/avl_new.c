//
// Created by youpaw on 6/21/20.
//

#include <stddef.h>
#include "cc_avl.h"
#include "cc_mem.h"

t_avl_obj 				*avl_new(int (*cmp)(const void *, const void *), \
	void (*del)(void *))
{
	t_avl_obj *obj;

	if (!cmp)
		return (NULL);
	obj = xmalloc(sizeof(t_avl_obj));
	obj->cmp = cmp;
	obj->del = del;
	obj->tree = NULL;
	return (obj);
}
