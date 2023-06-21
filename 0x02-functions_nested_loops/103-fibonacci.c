#include <stdio.h>
/**
  *main- Entry Point
  *description - fibonacci sum < 4000000 for even numbers
  *Return: (0)
  */
int main(void)
{
	int i = 0;
	long a = 1, b = 2, sum = b;

	while (b + a < 4000000)
	{
		b += a;
		if (b % 2 == 0)
			sum += b;
		a = b - a;
		++i;
	}
	printf("\n");
	return (0);
}

