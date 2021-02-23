/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_iter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:24 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:24 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"

void		ft_hash_map_iter(t_hash_map *table, void (*f)(void *content))
{
	t_list		*bucket;
	size_t		cnt;

	cnt = 0;
	if (!table || !f)
		return ;
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
