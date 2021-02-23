/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_get_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:56:14 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:56:16 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_avl.h"

void			*ft_avl_get_val(t_avl_obj *obj, const void *key)
{
	t_avl_pair	*pair;

	if ((pair = ft_avl_get_pair(obj, key)))
		return (pair->value);
	return (NULL);
}
