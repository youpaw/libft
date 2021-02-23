/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strarr_getsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:01:20 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:01:23 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t			ft_strarr_getsize(const char **m)
{
	size_t	len;

	len = 0;
	if (m)
		while (*m++)
			len++;
	return (len);
}
