/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:00:40 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:00:44 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

void	ft_print_usage(int fd, const char *bin, const char *usage)
{
	ft_fdputs(bin, fd);
	ft_fdputs(": usage: ", fd);
	ft_fdputs(bin, fd);
	ft_fdputs(" ", fd);
    ft_fdputendl(usage, fd);
}
