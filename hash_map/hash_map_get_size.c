/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_get_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:58:48 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:58:50 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"

size_t		ft_hash_map_get_size(const t_hash_map *map)
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
