/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:29 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:29 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

int		ft_atoi(const char *str)
{
	int					sig;
	long long			res;
	long long			tmp;

	sig = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sig = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		tmp = res;
		res = res * 10 + (*str - '0');
		if (tmp != (res - (*str - '0')) / 10 || res < 0)
			return (-1 * (sig + 1) / 2);
		str++;
	}
	return ((int)(res * sig));
}
