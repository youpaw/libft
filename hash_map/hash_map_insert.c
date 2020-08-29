//
// Created by youpaw on 6/21/20.
//

#include "cc_hash_map.h"
#include "cc_mem.h"

static void		replace_item(t_list *item, t_hash_pair *pair, void (*del)(t_hash_pair *))
{
	if (!item)
		return ;
	if (del)
		del(item->content);
	memmove(item->content, pair, item->content_size);
}

int				hash_map_insert(t_hash_map *table, t_hash_pair *pair)
{
	size_t index;
	t_list *item;

	if (!table || !pair)
		return (1);
	index = table->hasher(pair->key) % table->buckets_size;
	if ((item = lst_find(table->buckets[index], pair, table->cmp)))
		replace_item(item, pair, table->del);
	else
		lst_add(&(table->buckets[index]), lst_new(pair, sizeof(t_hash_pair)));
	return (0);
}