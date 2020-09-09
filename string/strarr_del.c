//
// Created by Darth Butterwell on 9/6/20.
//

#include <stdlib.h>

void			strarr_del(char **arr)
{
	if (arr)
		while (*arr)
			free(*arr++);
}