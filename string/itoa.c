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

static int	intlen(long long int n)
{
	int		len;

	if (n < 0)
		len = 1;
	else
		len = 0;
	while (n > 9 || n < -9)
	{
		len++;
		n /= 10;
	}
	return (++len);
}

char		*ft_itoa(long long int n)
{
	size_t	t;
	char	*str;
	int		size;

	size = intlen(n);
	if (n < 0)
		t = (size_t)(~n + 1);
	else
		t = (size_t)n;
	if (!(str = ft_strnew(size)))
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
