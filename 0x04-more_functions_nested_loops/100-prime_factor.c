#include <stdio.h>
#include <math.h>

/**
*main - finds the largest prime number of no:612852475143
*Return: (0)
*/
int main(void)
{
	long x, max;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			max = num / x;
		}
	}

	printf("%ld\n", max);

	return (0);
}
