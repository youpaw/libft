/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_del_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:10:31 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:10:31 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include "ft_mem.h"

int			ft_vec_del_one(t_vec *vector, size_t index)
{
	void	*data;

	if (!vector)
		return (VEC_DNE);
	if (index >= vector->size)
		return (VEC_OOB);
	data = ft_xmalloc(vector->datasize);
    ft_memmove(data, vector->data + (index * vector->datasize), vector->datasize);
	vector->del(data);
	free(data);
	return (VEC_OK);
}
