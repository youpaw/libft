/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:12 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:12 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print/ft_print.h"

void	ft_print_usage(int fd, const char *bin, const char *usage)
{
	ft_fdputs(bin, fd);
	ft_fdputs(": usage: ", fd);
	ft_fdputs(bin, fd);
	ft_fdputs(" ", fd);
	ft_fdputendl(usage, fd);
}
