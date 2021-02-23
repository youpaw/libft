/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:39 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:39 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *td;
	unsigned char *ts;

	td = (unsigned char*)dst;
	ts = (unsigned char*)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*td++ = *ts++;
	return (dst);
}
