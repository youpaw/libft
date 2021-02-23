/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numlen_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:20 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:20 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_numlen_base(size_t num, unsigned int base)
{
	int lng;

	if (base < 2)
		return (0);
	lng = 1;
	while (num >= base)
	{
		num /= base;
		lng++;
	}
	return (lng);
}
