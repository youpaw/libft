/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_get_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:31 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:31 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"

size_t	ft_hash_map_get_size(const t_hash_map *map)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (map)
		while (i < map->buckets_size)
			count += ft_lst_get_size(map->buckets[i++]);
	return (count);
}
