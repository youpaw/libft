/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:27 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:27 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!(str = ft_strnew(ft_strlen(s1))))
		return (NULL);
	return (ft_strcpy(str, s1));
}
