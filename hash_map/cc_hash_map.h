//
// Created by youpaw on 6/21/20.
//

#ifndef CC_HASH_MAP_H
#define CC_HASH_MAP_H
#include "cc_lst.h"

typedef struct	s_hash_pair
{
	void		*key;
	void		*value;
}				t_hash_pair;

typedef struct	s_hash_map
{
	t_list		**buckets;
	size_t		buckets_size;
	size_t		(*hasher)(const void *);
	int			(*cmp)(const void *, const void *);
	void 		(*del)(t_hash_pair *);
}				t_hash_map;

t_hash_map 		*hash_map_new(size_t n_buckets, \
				size_t (*hasher)(const void *), \
				int (*cmp)(const void *, const void *), \
				void 	(*del)(t_hash_pair *));
int				hash_map_insert(t_hash_map *table, t_hash_pair *pair);
t_hash_pair 	*hash_map_get_pair(const t_hash_map *table, const void *key);
void 			*hash_map_get_val(const t_hash_map *table, const void *key);
int 			hash_map_del_one(t_hash_map *table, const void *key);
void 			hash_map_del(t_hash_map **table);
size_t 			hash_map_get_size(const t_hash_map *table);
void 			hash_map_iter(t_hash_map *table, void (*f)(void *value));

#endif //CC_HASH_MAP_H
