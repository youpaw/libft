/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_get_pair.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:58:44 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:58:46 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_hash_map.h"

t_hash_pair		*hash_map_get_pair(const t_hash_map *table, const void *key)
{
	t_list		*item;
	size_t		index;
	t_hash_pair	pair;

	if (!table || !key)
		return (NULL);
	index = table->hasher(key) % table->buckets_size;
	pair.key = (void *)key;
	item = lst_find(table->buckets[index], &pair, table->cmp);
	if (item)
		return (item->content);
	return (NULL);
}
