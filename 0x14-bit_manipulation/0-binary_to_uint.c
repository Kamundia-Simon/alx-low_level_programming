#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - converts binary number to an unsigned int
  *@b: points to a string of 0/1
  *Return: converted number/0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{

		if (*b != '0' && *b != '1')
			return (0);
		bin  = (bin << 1) + (*b - '0');
	}
	return (bin);
}
