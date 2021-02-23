/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:58:57 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:58:59 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"
#include "ft_mem.h"

static void		replace_item(t_list *item, t_hash_pair *pair,\
				void (*del)(t_hash_pair *))
{
	if (!item)
		return ;
	if (del)
		del(item->content);
    ft_memmove(item->content, pair, item->content_size);
}

int				hash_map_insert(t_hash_map *table, t_hash_pair *pair)
{
	size_t index;
	t_list *item;

	if (!table || !pair)
		return (1);
	index = table->hasher(pair->key) % table->buckets_size;
	if ((item = ft_lst_find(table->buckets[index], pair, table->cmp)))
		replace_item(item, pair, table->del);
	else
        ft_lst_add(&(table->buckets[index]), ft_lst_new(pair, sizeof(t_hash_pair)));
	return (0);
}
