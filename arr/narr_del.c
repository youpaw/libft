/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   narr_del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:16:03 by dbutterw          #+#    #+#             */
/*   Updated: 2021/03/22 23:26:49 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_narr_del(void **arr, size_t n, void (*del)(void *))
{
	size_t	cnt;

	if (!arr || !*arr)
		return ;
	cnt = 0;
	while (cnt < n)
	{
		if (del)
			del(arr[cnt]);
		free(arr[cnt]);
		cnt++;
	}
	free(arr);
}
