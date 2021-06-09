/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:45:16 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:45:16 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	si;
	size_t	di;

	si = 0;
	di = 0;
	while (di < n)
	{
		if (src[si])
			dest[di++] = src[si++];
		else
			dest[di++] = '\0';
	}
	return (dest);
}
