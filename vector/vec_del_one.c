/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_del_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:02:24 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:02:26 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_vec.h"
#include "cc_mem.h"

int			vec_del_one(t_vec *vector, size_t index)
{
	void	*data;

	if (!vector)
		return (VEC_DNE);
	if (index >= vector->size)
		return (VEC_OOB);
	data = xmalloc(vector->datasize);
	memmove(data, vector->data + (index * vector->datasize), vector->datasize);
	vector->del(data);
	free(data);
	return (VEC_OK);
}
