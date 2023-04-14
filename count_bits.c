#include <stdio.h>
#include <unistd.h>

int	count_bits(unsigned char octet)
{
	int i = 8;
	int count = 0;
	
	while (i-- > 0)
	{
		if (octet >> i & 1)
			count++;
	}
	return (count);
}
