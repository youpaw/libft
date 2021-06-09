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
#include "ft_num.h"
#include "ft_char.h"

static char	get_basechar(int n, char reg)
{
	static char	*bchars = "0123456789abcdef";

	if (n < 10 || ft_islower(reg))
		return (bchars[n]);
	return ((char) ft_toupper(bchars[n]));
}

char	*ft_itoabase(size_t n, int base, char reg)
{
	char	*str;
	int		size;

	if (base > 16 || base < 2)
		return (NULL);
	size = ft_numlen_base(n, base);
	str = ft_strnew(size);
	if (!str)
		return (NULL);
	while (n > (size_t) base - 1)
	{
		str[--size] = get_basechar((int)(n % base), reg);
		n /= base;
	}
	str[size - 1] = get_basechar((int)(n % base), reg);
	return (str);
}
