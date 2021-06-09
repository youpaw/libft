/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strhash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:01:38 by hlorrine          #+#    #+#             */
/*   Updated: 2021/02/23 16:43:27 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strhash(const unsigned char *str)
{
	size_t	hash;

	hash = 5381;
	while (*str)
		hash = ((hash << 5) + hash) + *str++;
	return (hash);
}
