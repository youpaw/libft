#ifndef FT_HASH_H
#define FT_HASH_H

#include <unistd.h>
#define MD2_BLOCK_SIZE 16

typedef unsigned char BYTE;

typedef struct	s_md2_ctx{
	BYTE 		data[16];
	BYTE 		state[48];
	BYTE 		checksum[16];
	int 		len;
}				t_md2_ctx;

int	hash_md2(BYTE hash[MD2_BLOCK_SIZE], const void *data, size_t size);

#endif