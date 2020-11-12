/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:02:31 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:02:33 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_vec.h"

int		vec_get_last(void *dst, t_vec *vector)
{
	if (!vector)
		return (VEC_DNE);
	if (!vector->size)
		return (VEC_OOB);
	return (vec_get_at(dst, vector, vector->size - 1));
}
