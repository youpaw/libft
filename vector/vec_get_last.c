/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:10:20 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:10:20 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

int		ft_vec_get_last(void *dst, t_vec *vector)
{
	if (!vector)
		return (VEC_DNE);
	if (!vector->size)
		return (VEC_OOB);
	return (ft_vec_get_at(dst, vector, vector->size - 1));
}
