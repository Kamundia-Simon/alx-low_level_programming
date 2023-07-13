#include "main.h"
#include <stdlib.h>

/**
  *_calloc - allocates memory for an array
  *@nmemb: number of elements
  *@size: byte size
  *Return: 0, NULL or pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
		void *mem;
		char *c;
		unsigned int i;

		if (nmemb == 0 || size == 0)
			return (NULL);
		mem = malloc(nmemb * size);

		if (mem == NULL)
			return (NULL);
		c = mem;

		for (i = 0; i < (nmemb * size); i++)
			c[i] = '\0';

		return (mem);
}
