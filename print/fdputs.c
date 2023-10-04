/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:57 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:57 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/ft_str.h"
#include <unistd.h>

int	ft_fdputs(const char *restrict s, int stream)
{
	return (write(stream, s, ft_strlen(s)));
}
