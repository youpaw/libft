//
// Created by Darth Butterwell on 11/7/20.
//
#include "cc_char.h"

int strisnum(const char *str)
{
	if (!str || !*str)
		return (0);
	while (isdigit(*str))
		str++;
	if (!*str)
		return (1);
	return (0);
}
