/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strisnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:01:44 by hlorrine          #+#    #+#             */
/*   Updated: 2021/02/23 16:43:33 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

int	ft_strisnum(const char *str)
{
	if (!str || !*str)
		return (0);
	while (ft_isdigit(*str))
		str++;
	if (!*str)
		return (1);
	return (0);
}
