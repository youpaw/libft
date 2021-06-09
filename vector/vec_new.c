/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:25 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:44:25 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include "ft_mem.h"

t_vec	*ft_vec_new(size_t capacity, size_t datasize, void (*del)(void *))
{
	t_vec	*vector;

	vector = (t_vec *)ft_xmalloc(sizeof(t_vec));
	vector->data = ft_xmalloc(datasize * (capacity + 1));
	vector->capacity = capacity;
	vector->datasize = datasize;
	vector->size = 0;
	vector->del = del;
	ft_bzero(vector->data, datasize);
	return (vector);
}
