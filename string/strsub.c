/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:50 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:44:50 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	sub = ft_strnew(len);
	if (!sub)
		return (NULL);
	return (ft_strncpy(sub, &s[start], len));
}
