/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoabase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:50 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:50 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

static char		get_basechar(size_t n, char reg)
{
	char		*bchars;

	if (reg == 'x')
		bchars = "0123456789abcdef";
	else
		bchars = "0123456789ABCDEF";
	return (bchars[n]);
}

static int		get_size(size_t n, size_t base)
{
	int			len;

	len = 0;
	while (n > base - 1)
	{
		len++;
		n /= base;
	}
	return (++len);
}

char			*ft_itoabase(size_t n, size_t base, char reg)
{
	char		*str;
	int			size;

	if (base > 16 || base < 2)
		return (NULL);
	size = get_size(n, base);
	if (!(str = ft_strnew(size)))
		return (NULL);
	while (n > base - 1)
	{
		str[--size] = get_basechar(n % base, reg);
		n /= base;
	}
	str[size - 1] = get_basechar(n % base, reg);
	return (str);
}
