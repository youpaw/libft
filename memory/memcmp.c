/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:40 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:40 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ts1 != *ts2)
			return ((int)(*ts1 - *ts2));
		ts1++;
		ts2++;
	}
	return (0);
}
