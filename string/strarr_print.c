/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strarr_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:40 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:40 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

void	ft_strarr_print(const char **args, const char *st, const char *en)
{
	const char *start = "";
	const char *end = "\n";

	if (args)
	{
		if (st)
			start = st;
		if (en)
			end = en;
		while (*args)
		{
			ft_puts(start);
			ft_puts(*args++);
			ft_puts(end);
		}
	}
}
