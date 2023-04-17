#include <stdio.h>
#include <unistd.h>

void swap_bits_extra(unsigned char *byte1, unsigned char *byte2)
{
	unsigned char bits1 = (*byte1 & 0x03);
    unsigned char bits2 = (*byte2 & 0x03);
    
	*byte1 = ((*byte1 >> 2) << 2) | bits2;
    *byte2 = ((*byte2 >> 2) << 2) | bits1;
}
