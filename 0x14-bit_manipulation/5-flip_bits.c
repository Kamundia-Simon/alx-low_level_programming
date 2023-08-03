#include "main.h"

/**
 *flip_bits - returns the number of bits you would
 *need to flip to get from one number to another.
 *@n: int
 *@m: int to flip
 *Return:no of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int gate = n ^ m, bit = 0;

	while (gate > 0)
	{
		bit += (gate & 1);
		gate >>= 1;
	}

	return (bit);
}
