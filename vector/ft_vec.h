/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:10:41 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:43:33 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VEC_H
# define FT_VEC_H
# include <stdlib.h>

typedef struct		s_vec
{
	void			*data;
	size_t			datasize;
	size_t			capacity;
	size_t			size;
	void			(*del)(void *);
}					t_vec;

t_vec				*ft_vec_new(size_t capacity, size_t datasize,\
	void (*del)(void *));
int					ft_vec_push(t_vec *vector, void *data);
int					ft_vec_pop(void *data, t_vec *vector);
int					ft_vec_push_at(t_vec *vector, void *data, size_t index);
size_t				ft_vec_rm_last(t_vec *vector);
size_t				ft_vec_rm_at(t_vec *vector, size_t index);
int					ft_vec_get_last(void *dst, t_vec *vector);
int					ft_vec_get_at(void *dst, t_vec *vector, size_t index);
int					ft_vec_del(t_vec **vector);
int					ft_vec_del_one(t_vec *vector, size_t index);

#endif
