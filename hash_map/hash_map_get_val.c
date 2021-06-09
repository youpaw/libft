/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_get_val.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:28 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:28 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"

void	*ft_hash_map_get_val(const t_hash_map *table, const void *key)
{
	t_hash_pair	*pair;

	pair = ft_hash_map_get_pair(table, key);
	if (pair)
		return (pair->value);
	return (NULL);
}
