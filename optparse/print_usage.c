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

#include "cc_str.h"

void	print_usage(int fd, const char *bin, const char *usage)
{
	fdputs(bin, fd);
	fdputs(": usage: ", fd);
	fdputs(bin, fd);
	fdputs(" ", fd);
	fdputendl(usage, fd);
}
