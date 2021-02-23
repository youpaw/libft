/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:41 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:41 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_graph.h"
#include "ft_mem.h"
#include <stdlib.h>

t_graph	*ft_graph_new(char symbol, size_t index)
{
	t_graph	*graph;

	graph = (t_graph *)ft_xmalloc(sizeof(t_graph));
	graph->symbol = symbol;
	graph->index = index;
	graph->childs = NULL;
	return (graph);
}
