/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 21:23:41 by dbutterw          #+#    #+#             */
/*   Updated: 2021/06/09 21:23:41 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			g_ac = 0;
int			g_nc = 0;
const char	**g_av = NULL;
const char	**g_env = NULL;

__attribute__ ((constructor(201)))
void ft_init(int ac, const char **av, const char **env){
g_ac = ac;
g_av = av;
g_env = env;
}
