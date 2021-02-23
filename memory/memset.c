/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:35 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:35 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void				*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*uc;

	i = 0;
	uc = (unsigned char*)b;
	while (i < len)
		uc[i++] = (unsigned char)c;
	return (uc);
}
