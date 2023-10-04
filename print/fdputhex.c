//
// Created by youpaw on 10/4/23.
//
#include <unistd.h>

void	fdputhex(const void *data, size_t size, int fd)
{
	static const unsigned char hex[16] = "0123456789ABCDEF";
	unsigned char *str = (unsigned char *)data;
	size_t i = 0;

	while (i != size)
	{
		write(fd, &hex[str[i] >> 4], 1);
		write(fd, &hex[str[i] & '\x0f'], 1);
		i++;
	}
}
