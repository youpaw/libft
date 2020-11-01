//
// Created by Maxon Gena on 10/30/20.
//

#include "cc_char.h"
#include <unistd.h>
#include "cc_str.h"

size_t utf8_display_strlen(char *str)
{
	size_t	len;
	size_t 	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		i += utf8_sizeof_symbol(str[i]);
		if (strncmp(&str[i], "\xcc\x86", 2) && strncmp(&str[i], "\xcc\x88", 2))
			len ++;
	}
	return (len);
}