#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @array: array to be printed.
 * @l: left index of the sub-array to be printed.
 * @r: right index of the sub-array to be printed.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array
 * using the binary search algorithm
 * @array: A pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: The index where value is located
 * or -1 if the value is not present/NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		mid = (l + r) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}

	return (-1);
}
