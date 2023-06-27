#include "main.h"
#include <stdio.h>
/**
  *print_array - prints n elements of an array of integers
  *@a:array of integers
  *@n: number of elements to be printed
  */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
