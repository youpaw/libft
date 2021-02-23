/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optparse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:00:30 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:00:34 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "optparse.h"

static	size_t		is_opt_invalid(const char *opt, const char *validopt)
{
	while (*opt)
	{
		if (!ft_strchr(validopt, (int)(*opt)))
			return ((size_t)(*opt));
		opt++;
	}
	return (0);
}

static size_t		is_option(const char *opt)
{
	if (opt && opt[0] == '-' && opt[1] && ft_strcmp(opt, "--") != 0)
		return (1);
	return (0);
}

static	char		*get_options(const char **args, size_t len)
{
	char		*result;
	const char	*str;
	size_t		i;

	if (!args || !*args || !len)
		return (NULL);
	result = ft_strnew(len);
	i = 0;
	while (i < len)
	{
		str = &((*args)[1]);
		while (*str)
			result[i++] = *str++;
		args++;
	}
	return (result);
}

size_t				ft_optparse(const char **args,\
		const char *optstr, t_parsed_opt *result)
{
	size_t	skip;
	size_t	opt_count;
	size_t	error_opt;

	skip = 1;
	opt_count = 0;
	if (!args || !*args || !optstr || !result)
		return (0);
	result->options = NULL;
	while (is_option(args[skip]))
	{
		if ((error_opt = is_opt_invalid(&args[skip][1], optstr)))
		{
			result->invalid_opt = (char)error_opt;
			return (0);
		}
		opt_count += (ft_strlen(args[skip++]) - 1);
	}
	if (args[skip] && ft_strcmp(args[skip], "--") == 0)
		skip++;
	result->options = get_options(&args[1], opt_count);
	return (skip);
}
