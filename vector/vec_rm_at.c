/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rm_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:02:46 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:02:49 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_vec.h"
#include "cc_mem.h"

size_t	vec_rm_at(t_vec *vector, size_t index)
{
	void *pdata;

	if (!vector || !vector->size)
		return (0);
	if (index >= vector->size)
		return (vector->size);
	if (vector->del)
		vec_del_one(vector, index);
	pdata = vector->data + (index * vector->datasize);
	if (index < (vector->size - 1))
		memmove(pdata, pdata + vector->datasize, \
			(vector->size - index) * vector->datasize);
	else
		bzero(pdata, vector->datasize);
	vector->size--;
	return (vector->size);
}
