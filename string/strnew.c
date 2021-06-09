/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:45:11 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:45:11 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

char	*ft_strnew(size_t size)
{
	char	*res;

	if (!(size + 1))
		return (NULL);
	res = ft_xmalloc(size + 1);
	ft_memset(res, 0, size + 1);
	return (res);
}
