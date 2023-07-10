#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of char
  *initilised with a spefic char
  *@size: size of char
  *@c: char
  *Return: NULL or pointer
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || !str)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
