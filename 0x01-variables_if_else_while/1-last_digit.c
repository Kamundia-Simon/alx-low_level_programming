#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *description - checks last digit of vallue of n
  *Return: always 0
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than %d\n", n, ld, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is %d \n", n, ld,  ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than %d and not 6\n", n, ld, ld);
	}
	return (0);
}
