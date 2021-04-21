/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:02 by dbutterw          #+#    #+#             */
/*   Updated: 2021/04/21 23:10:03 by dbutterw         ###   ########.fr       */
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

void		ft_arr_quick_sort(void **items, size_t left, size_t right, \
			int (*cmp)(const void *, const void *))
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = left;
	j = right;
	p = (left + right) / 2;
	while (i <= j)
	{
		while ((cmp(items[i], items[p]) < 0) && (i < right))
			i++;
		while ((cmp(items[j], items[p]) > 0) && (j > left))
			j--;
		if (i <= j)
			swap(items, i++, j--);
	}
	if (left < j)
		ft_arr_quick_sort(items, left, j, cmp);
	if (i < right)
		ft_arr_quick_sort(items, i, right, cmp);
}
