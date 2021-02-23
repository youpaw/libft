/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_del.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:55 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:55 by dbutterw         ###   ########.fr       */
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
