#include <stdlib.h>
#include "main.h"

/**
  *malloc_checked - returns pointer to allocated memory
  *@b: size of memory
  *Return: pointer to alocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *byte = malloc(b);

	if (byte == NULL)
		exit(98);

	return (byte);
}
