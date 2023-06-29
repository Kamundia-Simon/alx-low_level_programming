#include "main.h"
/**
 *reverse_array - reverses contents of an array of integers
 *@a: array value
 *@n: number of elements in the array
 *Return: Void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}

