/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_get_pair.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:33 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:33 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"

t_hash_pair	*ft_hash_map_get_pair(const t_hash_map *table, const void *key)
{
	t_list		*item;
	size_t		index;
	t_hash_pair	pair;

	if (!table || !key)
		return (NULL);
	index = table->hasher(key) % table->buckets_size;
	pair.key = (void *)key;
	item = ft_lst_find(table->buckets[index], &pair, table->cmp);
	if (item)
		return (item->content);
	return (NULL);
}
