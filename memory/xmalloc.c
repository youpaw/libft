/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:33 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:33 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	*ft_xmalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
		return (ptr);
	write(2, "malloc() failed, exit...\n", 25);
	exit(EXIT_FAILURE);
}
