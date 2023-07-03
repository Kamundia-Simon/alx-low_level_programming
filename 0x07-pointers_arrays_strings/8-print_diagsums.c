#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - prints sum of the two diagonals of a square matrix of ints
  *@a: matrix
  *@size: size of array
  */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int sm1 = 0;
	int sm2 = 0;

	for (x = 0; x < size; x++)
	{
		sm1 = sm1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sm2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sm1, sm2);
}
