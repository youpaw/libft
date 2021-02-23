/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:42 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:42 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_graph.h"

void			ft_graph_insert(t_graph *graph, const char *word)
{
	t_list	*found;
	t_graph	new;

	if (!word)
		return ;
	new.symbol = *word;
	new.index = graph->index + 1;
	new.childs = NULL;
	found = ft_lst_find(graph->childs, &new, (int (*)(const void *,
			const void *))ft_graph_cmp);
	if (!found)
	{
		ft_lst_add_sort(&(graph->childs), ft_lst_new(&new, sizeof(new)),
					(int (*)(const void *, const void *))ft_graph_cmp);
		found = ft_lst_find(graph->childs, &new,
				(int (*)(const void *, const void *))ft_graph_cmp);
	}
	if (!(*word))
		return ;
	ft_graph_insert(found->content, ++word);
}
