/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:28 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:28 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"
#include <limits.h>

long long	ft_atoll(const char *str)
{
	int			sig;
	long long	res;

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
		if (sig > 0 && res > (LONG_MAX - (*str - '0')) / 10)
			return (LONG_MAX);
		if (sig < 0 && res * sig < (LONG_MIN + (*str - '0')) / 10)
			return (LONG_MIN);
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sig);
}
