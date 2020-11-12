/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optparse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:00:36 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:00:38 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTPARSE_H
# define OPTPARSE_H
# include <stddef.h>

typedef struct	s_parsed_opt
{
	char		*options;
	char		invalid_opt;
}				t_parsed_opt;

size_t			optparse(const char **args, const char *optstr,\
	t_parsed_opt *result);
void			print_usage(int fd, const char *bin, const char *usage);

#endif
