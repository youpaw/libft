/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdputnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:26 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:26 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <monetary.h>
#include "ft_char.h"

static int	fdputunsnbr(unsigned int n, int fd)
{
	static int	cnt;

	cnt++;
	if (n > 9)
		fdputunsnbr(n / 10, fd);
	ft_fdputchar(n % 10 + '0', fd);
	return (cnt);
}

size_t	ft_fdputnbr(int n, int fd)
{
	unsigned int	t;

	if (fd == -1)
		return (-1);
	if (n < 0)
	{
		ft_fdputchar('-', fd);
		t = (unsigned int)(~n + 1);
	}
	else
		t = (unsigned int)n;
	return (fdputunsnbr(t, fd));
}
