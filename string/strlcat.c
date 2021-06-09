/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:45:57 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:45:57 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_math.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	reslen;

	dstlen = ft_strlen(dst);
	reslen = ft_min((ssize_t)dstlen, (ssize_t)size) + ft_strlen(src);
	if (size > dstlen)
	{
		dst += dstlen;
		size -= dstlen;
		while (*src && size-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (reslen);
}
