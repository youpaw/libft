/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnequ.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:45:14 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:45:14 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
	if (!s1 && !s2)
		return (1);
	return (0);
}
