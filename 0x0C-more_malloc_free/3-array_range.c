#include "main.h"
#include <stdlib.h>

/**
  *array_range - creates an array of integers
  *@min: first value of array
  *@max: last value of the value
  *Return: NULL or pointer
  */
int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	a = malloc(size * sizeof(int));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = min++;

	return (a);
}
