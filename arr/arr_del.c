/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:16:20 by dbutterw          #+#    #+#             */
/*   Updated: 2021/03/22 23:26:49 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_arr_del(void ***arr, void (*del)(void *))
{
	void	**arr_head;

	if (!arr || !*arr)
		return ;
	arr_head = *arr;
	while (*arr_head)
	{
		if (del)
			del(*arr_head);
		free(*arr_head);
		arr_head++;
	}
	free(*arr);
	*arr = NULL;
}
