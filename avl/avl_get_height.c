/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_get_height.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:40 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:51:40 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_avl.h"

int	ft_avl_get_height(t_avl_tree *node)
{
	if (!node)
		return (0);
	return (node->height);
}
