//
// Created by Maxon Gena on 10/30/20.
//

#include "cc_char.h"
#include <unistd.h>

size_t utf8_display_strlen(char *str)
{
	size_t	len;
	size_t 	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		i += utf8_sizeof_symbol(str[i]);
		len ++;
	}
	return (len);
}