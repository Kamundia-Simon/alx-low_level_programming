#include "search_algos.h"
#include <stdio.h>

/**
 * _binary_search - Searches for a value in a sorted array
 * using the binary search algorithm
 * @array: A pointer to the first element of the array
 * @first: starting index of the subarray
 * @last: ending index of the subarray
 * @value: value to search for
 *
 * Return: The index where value is located
 * or -1 if the value is not present/NULL
 */

int _binary_search(int *array, size_t first, size_t last, int value)
{
	size_t mid;
	size_t i;

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			if (i != first)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = first + (last - first) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using the Exponential search algo
 * @array: Pointer to the first element of the array
 * @size: elements in the array
 * @value: value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, last;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	last = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, last);
	return (_binary_search(array, i / 2, last, value));
}
