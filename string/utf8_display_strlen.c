/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8_display_strlen.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:02:14 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:02:18 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_char.h"
#include <unistd.h>
#include "cc_str.h"

size_t		utf8_display_strlen(char *str)
{
	size_t		len;
	size_t		i;

	len = 0;
	i = 0;
	while (str[i])
	{
		i += utf8_sizeof_symbol(str[i]);
		if (strncmp(&str[i], "\xcc\x86", 2) && strncmp(&str[i], "\xcc\x88", 2))
			len++;
	}
	return (len);
}
