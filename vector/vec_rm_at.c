/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rm_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:12 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:44:12 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include "ft_mem.h"

size_t	ft_vec_rm_at(t_vec *vector, size_t index)
{
	void *pdata;

	if (!vector || !vector->size)
		return (0);
	if (index >= vector->size)
		return (vector->size);
	if (vector->del)
		ft_vec_del_one(vector, index);
	pdata = vector->data + (index * vector->datasize);
	if (index < (vector->size - 1))
		ft_memmove(pdata, pdata + vector->datasize, \
			(vector->size - index) * vector->datasize);
	else
		ft_bzero(pdata, vector->datasize);
	vector->size--;
	return (vector->size);
}
