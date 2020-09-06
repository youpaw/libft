//
// Created by Darth Butterwell on 9/6/20.
//

#include <stddef.h>

size_t			arr2_get_size(const char **m)
{
	size_t	len;

	len = 0;
	if (m)
		while (*m++)
			len++;
	return (len);
}