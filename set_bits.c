#include <stdio.h>
#include <unistd.h>

unsigned char set_bit(unsigned char octet, int position)
{
	unsigned char sample = 0x01;

	if (position > 8)
		return (0);
	while (position--)
		sample *= 2;
	octet = octet | sample;
	return (octet);
}