/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:29 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:44:29 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

int		ft_vec_get_last(void *dst, t_vec *vector)
{
	if (!vector || !vector->size)
		return (-1);
	return (ft_vec_get_at(dst, vector, vector->size - 1));
}
