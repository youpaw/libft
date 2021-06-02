/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_push_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:17 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 17:13:38 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include "ft_mem.h"

int			ft_vec_push_at(t_vec *vector, void *data, size_t index)
{
	void	*pdata;

	if (!vector || index > vector->size)
		return (-1);
	if (vector->size >= vector->capacity)
	{
		pdata = vector->data;
		vector->data = ft_xmalloc(vector->datasize *\
			(vector->capacity * 2 + 1));
		ft_memmove(vector->data, pdata, vector->datasize *\
			(vector->capacity + 1));
		free(pdata);
		vector->capacity *= 2;
	}
	pdata = vector->data + (index * vector->datasize);
	if (index < vector->size)
		ft_memmove(pdata + vector->datasize, pdata, \
			vector->datasize * (vector->size - index));
	ft_memmove(pdata, data, vector->datasize);
	vector->size++;
	ft_bzero(vector->data + (vector->size * vector->datasize), \
		vector->datasize);
	return (0);
}
