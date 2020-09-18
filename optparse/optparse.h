//
// Created by Azzak Omega on 9/13/20.
//

#ifndef OPTPARSE_H
# define OPTPARSE_H
#include <stddef.h>

typedef struct	s_parsed_opt
{
	char		*options;
	char 		invalid_opt;
}				t_parsed_opt;

size_t	optparse(const char **args, const char *optstr, t_parsed_opt *result);

#endif //OPTPARSE_H
