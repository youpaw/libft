/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:37 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:37 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s++ == (char)c)
			return ((char *)(s - 1));
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
