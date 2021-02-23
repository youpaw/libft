/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:45 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:45 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_graph.h"

void	ft_graph_init(t_graph *graph)
{
	if (graph)
	{
		graph->symbol = '\0';
		graph->index = 0;
		graph->childs = NULL;
	}
}
