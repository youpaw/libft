/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:22 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:44:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

int	ft_vec_pop(void *data, t_vec *vector)
{
	if (!ft_vec_get_last(data, vector))
	{
		ft_vec_rm_last(vector);
		return (0);
	}
	return (-1);
}
