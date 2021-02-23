/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_del.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 19:08:02 by azomega           #+#    #+#             */
/*   Updated: 2020/08/19 19:08:06 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_graph.h"
#include "ft_lst.h"

void	ft_graph_del(t_graph *graph)
{
	if (graph)
	{
        ft_lst_del(&(graph->childs), (void (*)(void *))ft_graph_del);
		graph->childs = NULL;
	}
}
