/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:02:36 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:02:38 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_vec.h"

int		vec_pop(void *data, t_vec *vector)
{
	int error;

	if (!(error = vec_get_last(data, vector)))
		vec_rm_last(vector);
	return (error);
}
