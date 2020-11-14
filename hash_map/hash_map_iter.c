/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_iter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:59:01 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:59:03 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_hash_map.h"

void		hash_map_iter(t_hash_map *table, void (*f)(void *content))
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
