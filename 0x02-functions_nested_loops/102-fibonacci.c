#include <stdio.h>
/**
  *main- Entry Point
  *description- prints the first 50 sequence of the fibonacci
  *Return: (0)
  */
int main(void)
{
	int i;
	long a = 1, b = 2;

	while (i < 50)
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

		++i;
	}
	printf("\n");
	return (0);
}

