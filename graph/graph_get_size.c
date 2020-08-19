/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 19:08:34 by azomega           #+#    #+#             */
/*   Updated: 2020/08/19 19:08:36 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_graph.h"

size_t		graph_get_size(const t_graph *g)
{
	size_t	size;
	t_list	*iter;

	size = 0;
	if (g->symbol == '\0')
		size++;
	iter = g->childs;
	while (iter)
	{
		size += graph_get_size(iter->content);
		iter = iter->next;
	}
	return (size);
}
