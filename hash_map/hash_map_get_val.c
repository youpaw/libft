//
// Created by youpaw on 6/21/20.
//

#include "cc_hash_map.h"

void 			*hash_map_get_val(const t_hash_map *table, const void *key)
{
	t_hash_pair *pair;

	pair = hash_map_get_pair(table, key);
	if (pair)
		return (pair->value);
	return (NULL);
}