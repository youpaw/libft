/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:42 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:42 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ts;
	unsigned char	t;

	ts = (unsigned char *)s;
	t = (unsigned char)c;
	while (n--)
	{
		if (*ts == t)
			return ((void *)ts);
		ts++;
	}
	return (NULL);
}
