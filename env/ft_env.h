/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 21:23:35 by dbutterw          #+#    #+#             */
/*   Updated: 2021/06/09 21:23:46 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ENV_H
# define FT_ENV_H

extern int			g_ac;
extern int			g_nc;
extern const char	**g_av;
extern const char	**g_env;

void	ft_init(int ac, const char **av, const char **env);

#endif
