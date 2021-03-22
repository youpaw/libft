/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_get_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:15:54 by dbutterw          #+#    #+#             */
/*   Updated: 2021/03/22 23:17:01 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_arr_get_size(void **arr)
{
	size_t	size;

	if (!arr || !*arr)
		return (0);
	size = 0;
	while (*arr)
	{
		arr++;
		size++;
	}
	return (size);
}
