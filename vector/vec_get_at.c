/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 00:31:39 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/13 00:31:43 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_vec.h"
#include "cc_mem.h"

int		vec_get_at(void *dst, t_vec *vector, size_t index)
{
	if (!vector)
		return (VEC_DNE);
	if (!vector->size || index >= vector->size)
		return (VEC_OOB);
	memmove(dst, vector->data + (index * vector->datasize), vector->datasize);
	return (VEC_OK);
}
