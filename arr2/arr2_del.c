//
// Created by Darth Butterwell on 9/6/20.
//

#include <stdlib.h>

void			arr2_del(char **m)
{
	if (m)
		while (*m)
			free(*m++);
}