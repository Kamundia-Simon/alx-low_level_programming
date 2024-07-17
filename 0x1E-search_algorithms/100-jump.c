#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using
 * the jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search
 *
 * Return: The first index where value is located/
 * -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j = sqrt(size);
	size_t pre = 0;
	size_t i;
	size_t step = j;

	if (array == NULL)
		return (-1);

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		pre = step;
		step += j;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", pre, step);

	for (i = pre; i <= step && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
