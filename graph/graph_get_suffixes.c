/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_suffixes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 19:08:27 by azomega           #+#    #+#             */
/*   Updated: 2020/08/19 19:08:29 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_graph.h"

char	**graph_get_suffixes(const t_graph *graph)
{
	char	**ret;
	char	**child_suf;
	size_t	size;
	size_t	i;
	size_t	j;
	t_list	*iter;

	if (graph->symbol == '\0' && graph->index > 0)
	{
		ret = (char	**)malloc(sizeof(char *) * 2);
		ret[0] = (char *)malloc(sizeof(char) * graph->index);
		ret[0][graph->index - 1] = '\0';
		ret[1] = NULL;
		return (ret);
	}
	size = graph_get_size(graph);
	ret = (char	**)malloc(sizeof(char *) * (size + 1));
	ret[size] = NULL;
	iter = graph->childs;
	i = 0;
	while (iter)
	{
		size = graph_get_size(iter->content);
		j = 0;
		child_suf = graph_get_suffixes(iter->content);
		while (j < size)
			ret[i++] = child_suf[j++];
		free(child_suf);
		iter = iter->next;
	}
	size = graph_get_size(graph);
	if (graph->index > 0)
		while (size-- > 0)
			ret[size][graph->index - 1] = graph->symbol;
	return (ret);
}
