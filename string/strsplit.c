/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:45:02 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:45:02 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	**ft_strsplit(char const *s)
{
	static char	charset[] = " \t\n";

	return (ft_strsplitcharset(s, charset));
}
