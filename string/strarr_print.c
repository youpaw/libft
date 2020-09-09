//
// Created by Darth Butterwell on 9/6/20.
//

#include "cc_str.h"

void			strarr_print(const char **args, const char *st, const char *en)
{
	const char *start = "";
	const char *end = "\n";

	if (args)
	{
		if (st)
			start = st;
		if (en)
			end = en;
		while (*args)
		{
			puts(start);
			puts(*args++);
			puts(end);
		}
	}
}