/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_get_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:37 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:51:37 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_avl.h"

void	*ft_avl_get_val(t_avl_obj *obj, const void *key)
{
	t_avl_pair	*pair;

	pair = ft_avl_get_pair(obj, key);
	if (pair)
		return (pair->value);
	return (NULL);
}
