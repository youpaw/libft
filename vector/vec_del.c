/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:36 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:44:36 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

int			ft_vec_del(t_vec **vector)
{
	size_t	cnt;
	t_vec	*tmp;

	if (!vector || !*vector)
		return (VEC_DNE);
	cnt = 0;
	tmp = *vector;
	if (tmp->del)
		while (cnt < tmp->size)
			ft_vec_del_one(tmp, cnt++);
	free(tmp->data);
	free(tmp);
	return (VEC_OK);
}
