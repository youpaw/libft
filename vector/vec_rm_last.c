/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rm_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:09:35 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:09:35 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

size_t	ft_vec_rm_last(t_vec *vector)
{
	if (!vector->size)
		return (0);
	return (ft_vec_rm_at(vector, vector->size - 1));
}
