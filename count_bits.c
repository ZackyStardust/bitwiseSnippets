#include <stdio.h>
#include <unistd.h>

int	count_bits(unsigned char octet)
{
	int i = 0;
	int count = 0;
	
	while (i < 8)
	{
		if (octet >> i & 1)
			count++;
		i++;
	}
	return (count);
}
