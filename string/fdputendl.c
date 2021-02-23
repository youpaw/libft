/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdputendl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:58 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:58 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_char.h"

void	ft_fdputendl(char const *s, int fd)
{
	if (!s && fd == -1)
		return ;
	ft_fdputs(s, fd);
	ft_fdputchar('\n', fd);
}
