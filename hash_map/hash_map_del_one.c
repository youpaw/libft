/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_del_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:58:34 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:58:37 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_hash_map.h"

int				hash_map_del_one(t_hash_map *table, const void *key)
{
	size_t		index;
	t_hash_pair pair;

	if (!table || !key)
		return (1);
	index = table->hasher(key) % table->buckets_size;
	pair.key = (void *)key;
	return (lst_del_one_if(&(table->buckets[index]), &pair,
			table->cmp, (void (*)(void *))table->del));
}
