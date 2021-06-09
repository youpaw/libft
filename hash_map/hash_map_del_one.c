/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_del_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:35 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:35 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"

int	ft_hash_map_del_one(t_hash_map *table, const void *key)
{
	size_t		index;
	t_hash_pair	pair;

	if (!table || !key)
		return (1);
	index = table->hasher(key) % table->buckets_size;
	pair.key = (void *)key;
	return (ft_lst_del_one_if(&(table->buckets[index]), &pair,
			table->cmp, (void (*)(void *))table->del));
}
