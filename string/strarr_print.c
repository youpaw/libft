/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strarr_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:01:25 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:01:27 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_str.h"

void			strarr_print(const char **args, const char *st, const char *en)
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
			puts(start);
			puts(*args++);
			puts(end);
		}
	}
}
