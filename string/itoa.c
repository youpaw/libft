/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:53 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:53 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_num.h"

char	*ft_itoa(ssize_t n)
{
	size_t	t;
	char	*str;
	int		size;

	size = ft_numlen(n);
	if (n < 0)
		t = (size_t)(~n + 1);
	else
		t = (size_t)n;
	str = ft_strnew(size);
	if (!str)
		return (NULL);
	while (t > 9)
	{
		str[--size] = t % 10 + '0';
		t /= 10;
	}
	str[--size] = t % 10 + '0';
	if (size)
		str[size - 1] = '-';
	return (str);
}
