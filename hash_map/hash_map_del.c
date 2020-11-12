/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:58:39 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:58:41 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_hash_map.h"

void		hash_map_del(t_hash_map **table)
{
	size_t	cnt;

	cnt = 0;
	if (table && *table)
	{
		while (cnt < (*table)->buckets_size)
			lst_del(&((*table)->buckets[cnt++]),\
			(void (*)(void *)) (*table)->del);
		free((*table)->buckets);
		free(*table);
		*table = NULL;
	}
}
