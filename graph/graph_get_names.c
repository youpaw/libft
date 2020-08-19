/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_names.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 19:08:22 by azomega           #+#    #+#             */
/*   Updated: 2020/08/19 19:08:23 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_graph.h"
#include "cc_str.h"

static void	add_prefix(char **names, const char *prefix)
{
	size_t	len;

	len = strlen(prefix);
	while (*names)
		strncpy(*names++, prefix, len);
}

char		**graph_get_names(const t_graph *graph, const char *word)
{
	const t_graph	*entry_point;
	char			**names;

	if (!(entry_point = graph_find_entry(graph, word)))
		return (NULL);
	names = graph_get_suffixes(entry_point);
	add_prefix(names, word);
	return (names);
}
