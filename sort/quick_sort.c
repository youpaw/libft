/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:01:01 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:01:04 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	swap(void **items, int lhs, int rhs)
{
	void	*temp;

	if (lhs == rhs)
		return ;
	temp = items[rhs];
	items[rhs] = items[lhs];
	items[lhs] = temp;
}

void		quick_sort(void **items, int left, int right, \
			int (*cmp)(const void *l, const void *r))
{
	int		i;
	int		j;
	void	*x;

	i = left;
	j = right;
	x = items[(left + right) / 2];
	while (i <= j)
	{
		while ((cmp(items[i], x) < 0) && (i < right))
			i++;
		while ((cmp(items[j], x) > 0) && (j > left))
			j--;
		if (i <= j)
			swap(items, i++, j--);
	}
	if (left < j)
		quick_sort(items, left, j, cmp);
	if (i < right)
		quick_sort(items, i, right, cmp);
}
