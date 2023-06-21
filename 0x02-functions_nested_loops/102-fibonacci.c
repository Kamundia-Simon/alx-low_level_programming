#include <stdio.h>
/**
  *main- Entry Point
  *description- prints the first 50 sequence of the fibonacci
  *Return: (0)
  */
int main(void)
{
	long a = 1, b = 2;
	int i;

	for (int i = 0; i < 50; ++i)
	{
		if (i == 0)
			printf("%ld", a);
		else if (i == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}
	}
	printf("\n");
	return (0);
}

