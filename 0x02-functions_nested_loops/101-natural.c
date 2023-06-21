#include <stdio.h>
/**
  *main - Entry point
  *description: prints sum on multiples of 3&9 in range 0 to 1024
  *Return: 0
  */

int main(void)
{
	int x;
	int sum;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}

