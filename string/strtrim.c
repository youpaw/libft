/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:47 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:44:47 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_char.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (i < len && ft_isspace(s[i]))
		i++;
	while (len > i && ft_isspace(s[len - 1]))
		len--;
	return (ft_strsub(s, i, len - i));
}
