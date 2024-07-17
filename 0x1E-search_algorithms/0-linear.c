#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using linear search algo.
 * @array: Pointer to the first element of the array in search
 * @size: Number of array elements.
 * @value: value o search
 *
 * Return: The first index where value is located, or -1 if value is
 *         not present or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
