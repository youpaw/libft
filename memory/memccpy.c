/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:43 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:43 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	t;
	unsigned char	*td;
	unsigned char	*ts;

	t = (unsigned char)c;
	td = (unsigned char *)dst;
	ts = (unsigned char *)src;
	while (n--)
	{
		*td = *ts;
		if (*ts == t)
			return ((void *)(td + 1));
		td++;
		ts++;
	}
	return (NULL);
}
