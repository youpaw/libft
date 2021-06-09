/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:02 by dbutterw          #+#    #+#             */
/*   Updated: 2021/04/23 21:54:08 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	swap(void **items, size_t lhs, size_t rhs)
{
	void	*temp;

	if (lhs == rhs)
		return ;
	temp = items[rhs];
	items[rhs] = items[lhs];
	items[lhs] = temp;
}

void	ft_arr_quick_sort(void **items, size_t size, \
	int (*cmp)(const void *, const void *))
{
	size_t	i;
	size_t	j;
	void	*p;

	i = 0;
	j = size - 1;
	p = items[size / 2];
	while (1)
	{
		while ((cmp(items[i], p) < 0))
			i++;
		while ((cmp(items[j], p) > 0))
			j--;
		if (i <= j)
			swap(items, i++, j--);
		if (i > j)
			break ;
	}
	if (j > 0)
		ft_arr_quick_sort(items, j + 1, cmp);
	if (i < (size - 1))
		ft_arr_quick_sort(&items[i], size - i, cmp);
}
