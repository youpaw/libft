/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:36 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:36 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"

void	ft_hash_map_del(t_hash_map **table)
{
	size_t	cnt;

	cnt = 0;
	if (table && *table)
	{
		while (cnt < (*table)->buckets_size)
			ft_lst_del(&((*table)->buckets[cnt++]), \
				(void (*)(void *))(*table)->del);
		free((*table)->buckets);
		free(*table);
		*table = NULL;
	}
}
