/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:32 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 17:09:53 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include "ft_mem.h"

int		ft_vec_get_at(void *dst, t_vec *vector, size_t index)
{
	if (!vector)
		return (VEC_DNE);
	if (!vector->size || index >= vector->size)
		return (VEC_OOB);
	ft_memmove(dst, vector->data + (index * vector->datasize),\
		vector->datasize);
	return (VEC_OK);
}
