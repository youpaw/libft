//
// Created by Darth Butterwell on 6/10/21.
//

#include <stdint.h>

uint16_t	ft_swap_uint16(uint16_t x)
{
	return ((x >> 8) | (x << 8));
}

uint32_t	ft_swap_uint32(uint32_t x)
{
	x = ((x >> 8) & 0x00FF00FF) | ((x << 8) & 0xFF00FF00);
	return ((x >> 16) | (x << 16));
}

uint64_t	ft_swap_uint64(uint64_t x)
{
	x = ((x >> 8) & 0x00FF00FF00FF00FFULL) | ((x << 8) & 0xFF00FF00FF00FF00ULL);
	x = ((x >> 16) & 0x0000FFFF0000FFFFULL) | \
		((x << 16) & 0xFFFF0000FFFF0000ULL);
	return ((x >> 32) | (x << 32));
}
