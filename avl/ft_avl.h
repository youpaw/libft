/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:22 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:53:07 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_AVL_H
# define FT_AVL_H

# include <stddef.h>

struct						s_avl_pair{
	void	*key;
	void	*value;
};

struct						s_avl_tree
{
	struct s_avl_pair		*pair;
	struct s_avl_tree		*left;
	struct s_avl_tree		*right;
	int						height;
};

struct						s_avl_obj
{
	int						(*cmp)(const void *, const void *);
	void					(*del)(void *);
	struct s_avl_tree		*tree;
};

typedef struct s_avl_pair	t_avl_pair;
typedef struct s_avl_tree	t_avl_tree;
typedef struct s_avl_obj	t_avl_obj;

t_avl_obj					*ft_avl_new(int (*cmp)(const void *, const void *),\
	void (*del)(void *));

t_avl_tree					*ft_avl_balance(t_avl_tree *node, \
	int (*cmp)(const void *, const void *));
int							ft_avl_get_height(t_avl_tree *node);

t_avl_tree					*ft_avl_new_node(t_avl_pair *pair);
t_avl_tree					*ft_avl_insert(t_avl_obj *obj, t_avl_pair *pair);

t_avl_tree					*ft_avl_get(t_avl_obj *obj, const void *key);
t_avl_pair					*ft_avl_get_pair(t_avl_obj *obj, const void *key);
void						*ft_avl_get_val(t_avl_obj *obj, const void *key);

void						ft_avl_map_prefix(t_avl_obj *obj, \
	void (*f)(void *));
void						ft_avl_map_infix(t_avl_obj *obj, \
	void (*f)(void *));
void						ft_avl_map_postfix(t_avl_obj *obj, \
	void (*f)(void *));

int							ft_avl_del_one(t_avl_obj *obj, const void *key);
void						ft_avl_del(t_avl_obj **obj);

#endif
