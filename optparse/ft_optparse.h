/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optparse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:14 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:14 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPTPARSE_H
# define FT_OPTPARSE_H
# include <stddef.h>

typedef struct	s_parsed_opt
{
	char		*options;
	char		invalid_opt;
}				t_parsed_opt;

size_t			ft_optparse(const char **args, const char *optstr,\
	t_parsed_opt *result);
void			ft_print_usage(int fd, const char *bin, const char *usage);

#endif
