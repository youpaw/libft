/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rm_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 15:54:40 by dbutterw          #+#    #+#             */
/*   Updated: 2020/11/12 23:03:03 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_vec.h"

size_t	vec_rm_last(t_vec *vector)
{
	if (!vector->size)
		return (0);
	return (vec_rm_at(vector, vector->size - 1));
}
