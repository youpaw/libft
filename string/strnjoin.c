/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nstrjoin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:17:44 by dbutterw          #+#    #+#             */
/*   Updated: 2019/11/25 20:06:09 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_str.h"

char		*strnjoin(const char **arr)
{
	int			n_str;
	int			index;
	char		*str;
	size_t		len;

	if (!arr || !*arr)
		return (NULL);
	n_str = 0;
	len = 0;
	while (arr[n_str])
		len += strlen(arr[n_str++]);
	str = strnew(len);
	index = 0;
	while (index < n_str)
		str = strcat(str, arr[index++]);
	return (str);
}
