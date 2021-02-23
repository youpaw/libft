/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strarr_getsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:41 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:41 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t			ft_strarr_getsize(const char **m)
{
	size_t	len;

	len = 0;
	if (m)
		while (*m++)
			len++;
	return (len);
}
