//
// Created by youpaw on 6/21/20.
//

#include "cc_hash_map.h"

int 			hash_map_del_one(t_hash_map *table, const void *key)
{
	size_t 		index;
	t_hash_pair pair;

	index = table->hasher(key) % table->buckets_size;
	pair.key = key;
	return (lst_del_one_if(&(table->buckets[index]), &pair,
			table->cmp, table->del));
}