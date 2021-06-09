/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_get_pair.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:39 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:51:39 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_avl.h"

t_avl_pair	*ft_avl_get_pair(t_avl_obj *obj, const void *key)
{
	t_avl_tree	*node;

	node = ft_avl_get(obj, key);
	if (node)
		return (node->pair);
	return (NULL);
}
