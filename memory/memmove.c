/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:36 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:36 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	if (!src && !dst)
		return (NULL);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	if (tmpsrc < tmpdst)
		while (len--)
			*(tmpdst + len) = *(tmpsrc + len);
	else
		while (len--)
			*tmpdst++ = *tmpsrc++;
	return (dst);
}
