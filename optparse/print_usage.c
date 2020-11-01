//
// Created by Azzak Omega on 11/1/20.
//
#include "cc_str.h"

void	print_usage(int fd, const char *bin, const char *usage)
{
	fdputs(bin, fd);
	fdputs(": usage: ", fd);
	fdputs(bin, fd);
	fdputs(" ", fd);
	fdputendl(usage, fd);
}
