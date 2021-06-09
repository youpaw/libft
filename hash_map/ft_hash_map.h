/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_map.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:38 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:38 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASH_MAP_H
# define FT_HASH_MAP_H
# include "ft_lst.h"

typedef struct s_hash_pair
{
	void		*key;
	void		*value;
}				t_hash_pair;

typedef struct s_hash_map
{
	t_list		**buckets;
	size_t		buckets_size;
	size_t		(*hasher)(const void *);
	int			(*cmp)(const void *, const void *);
	void		(*del)(t_hash_pair *);
}				t_hash_map;

t_hash_map		*ft_hash_map_new(size_t n_buckets, \
				size_t (*hasher)(const void *), \
				int (*cmp)(const void *, const void *), \
				void (*del)(t_hash_pair *));
int				ft_hash_map_insert(t_hash_map *table, t_hash_pair *pair);
t_hash_pair		*ft_hash_map_get_pair(const t_hash_map *table, const void *key);
void			*ft_hash_map_get_val(const t_hash_map *table, const void *key);
int				ft_hash_map_del_one(t_hash_map *table, const void *key);
void			ft_hash_map_del(t_hash_map **table);
size_t			ft_hash_map_get_size(const t_hash_map *table);
void			ft_hash_map_iter(t_hash_map *table, void (*f)(void *value));

#endif
