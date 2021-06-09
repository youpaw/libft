/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnjoin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:45:09 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:45:09 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strnjoin(const char **arr)
{
	int		n_str;
	int		index;
	char	*str;
	size_t	len;

	if (!arr || !*arr)
		return (NULL);
	n_str = 0;
	len = 0;
	while (arr[n_str])
		len += ft_strlen(arr[n_str++]);
	str = ft_strnew(len);
	index = 0;
	while (index < n_str)
		str = ft_strcat(str, arr[index++]);
	return (str);
}
