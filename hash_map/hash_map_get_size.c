//
// Created by Azzak Omega on 8/26/20.
//
#include "cc_hash_map.h"

size_t 			hash_map_get_size(const t_hash_map *map)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (map)
		while (i < map->buckets_size)
			count += lst_get_size(map->buckets[i++]);
	return (count);
}

