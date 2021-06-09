/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:45:05 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:45:05 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = NULL;
	while (*s)
	{
		if (*s == (char)c)
			found = (char *)s;
		s++;
	}
	if (*s == (char)c)
		found = (char *)s;
	return (found);
}
