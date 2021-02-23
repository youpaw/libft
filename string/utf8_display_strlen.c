/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8_display_strlen.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:45 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:44:45 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"
#include <unistd.h>
#include "ft_str.h"

size_t		ft_utf8_display_strlen(char *str)
{
	size_t		len;
	size_t		i;

	len = 0;
	i = 0;
	while (str[i])
	{
		i += ft_utf8_sizeof_symbol(str[i]);
		if (ft_strncmp(&str[i], "\xcc\x86", 2) && \
			ft_strncmp(&str[i], "\xcc\x88", 2))
			len++;
	}
	return (len);
}
