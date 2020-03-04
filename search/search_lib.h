//
// Created by youpaw on 03.03.2020.
//

#ifndef SEARCH_LIB_H
#define SEARCH_LIB_H

typedef struct		s_avl
{
	void			*key;
	void			*payload;
	struct s_avl	*left;
	struct s_avl	*right;
	int				height;
}					t_avl;

int 				ft_get_height(t_avl *node);

int 				ft_get_balance(t_avl *node);

t_avl				*ft_new_node(void *key, void *payload);

t_avl				*ft_right_rotate(t_avl *y);

t_avl				*ft_left_rotate(t_avl *x);

t_avl				*ft_insert_avl(t_avl *node, void *key, void *payload, \
int (*cmp)(void *, void *));

#endif //SEARCH_LIB_H
