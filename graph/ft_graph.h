/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:58 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:58 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GRAPH_H
# define FT_GRAPH_H

# include "ft_lst.h"

typedef struct	s_graph
{
	char		symbol;
	size_t		index;
	t_list		*childs;
}				t_graph;

t_graph			*ft_graph_new(char symbol, size_t index);
void			ft_graph_init(t_graph *graph);
void			ft_graph_del(t_graph *graph);
int				ft_graph_cmp(const t_graph *lhs, const t_graph *rhs);
void			ft_graph_insert(t_graph *graph, const char *word);
char			**ft_graph_get_suffixes(const t_graph *graph);
char			**ft_graph_get_names(const t_graph *graph, const char *word);

#endif
