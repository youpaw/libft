//
// Created by Darth Butterwell on 6/2/21.
//
#include "ft_error.h"

const char *g_df_err[N_DF_ERRORS] = {
		"Operation not permitted.",
		"No such file or directory.",
  		"No such process.",
		"Interrupted system call.",
		"Input/output error.",
		"Device not configured.",
		"Argument list too long.",
		"Exec format error.",
		"Bad file descriptor.",
		"No child processes.",
		"Resource deadlock avoided.",
		"Cannot allocate memory.",
		"Permission denied."
};

int 	ft_print_error(const char *name, const char *arg, const char *msg)
{
	ft_fdputs(name, 2);
	ft_fdputs(": error: ", 2);
	if (arg)
	{
		ft_fdputs(arg, 2);
		ft_fdputs(": ", 2);
	}
	if (msg)
		ft_fdputs(msg, 2);
	if (errno > 0 && errno <= N_DF_ERRORS)
	{
		if (msg)
			ft_fdputs(": ", 2);
		ft_fdputs(g_df_err[errno - 1], 2);
	}
	else if (!msg)
		ft_fdputs("Unknown error.", 2);
	return (errno);
}