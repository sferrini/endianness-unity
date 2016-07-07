#include <stdint.h>

uint16_t endianness_change_16(uint16_t n)
{
	uint16_t re = 0;
	re |= (n << 8) & 0xFF00;
	re |= (n >> 8) & 0x00FF;
	return re;
}

uint32_t endianness_change_32(uint32_t n)
{
	uint32_t re = 0;
	re |= (n << 24) & 0xFF000000;
	re |= (n << 8)  & 0x00FF0000;
	re |= (n >> 8)  & 0x0000FF00;
	re |= (n >> 24) & 0x000000FF;
	return re;
}

uint64_t endianness_change_64(uint64_t n)
{
	uint64_t re = 0;
	re |= (n << 56) & 0xFF00000000000000;
	re |= (n << 40) & 0x00FF000000000000;
	re |= (n << 24) & 0x0000FF0000000000;
	re |= (n << 8)  & 0x000000FF00000000;
	re |= (n >> 8)  & 0x00000000FF000000;
	re |= (n >> 24) & 0x0000000000FF0000;
	re |= (n >> 40) & 0x000000000000FF00;
	re |= (n >> 56) & 0x00000000000000FF;
	return re;
}
