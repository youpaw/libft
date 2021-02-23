/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map_get_val.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:58:52 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:58:55 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash_map.h"

void			*ft_hash_map_get_val(const t_hash_map *table, const void *key)
{
	t_hash_pair *pair;

	pair = ft_hash_map_get_pair(table, key);
	if (pair)
		return (pair->value);
	return (NULL);
}
