/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_cmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:56 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:48:56 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_graph.h"

int	ft_graph_cmp(const t_graph *lhs, const t_graph *rhs)
{
	return (lhs->symbol - rhs->symbol);
}
