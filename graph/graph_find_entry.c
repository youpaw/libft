/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_find_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 19:08:13 by azomega           #+#    #+#             */
/*   Updated: 2020/08/19 19:08:14 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_graph.h"

const t_graph	*graph_find_entry(const t_graph *graph, const char *word)
{
	t_list	*found;
	t_graph	new;

	if (!(*word))
		return (graph);
	new.symbol = *word;
	new.index = graph->index + 1;
	new.childs = NULL;
	found = lst_find(graph->childs, (int (*)(const void *,
			const void *))graph_cmp, &new);
	if (!found)
		return (NULL);
	return (graph_find_entry(found->content, ++word));
}
