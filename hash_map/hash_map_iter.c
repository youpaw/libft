//
// Created by youpaw on 6/24/20.
//
#include "cc_hash_map.h"

void 			hash_map_iter(t_hash_map *table, void (*f)(void *content))
{
	t_list *bucket;
	t_hash_pair *pair;
	size_t cnt;

	cnt = 0;
	while (cnt < table->buckets_size)
	{
		bucket = table->buckets[cnt];
		while (bucket)
		{

			f(bucket->content);
			bucket = bucket->next;
		}
		cnt++;
	}
}