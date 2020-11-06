//
// Created by Darth Butterwell on 11/7/20.
//

#include "cc_str.h"

int	strispath(const char *str)
{
	if (*str == '/' || !strncmp(str, "./", 2) || !strncmp(str, "../", 3))
		return (1);
	return (0);
}