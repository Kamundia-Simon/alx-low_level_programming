#include "main.h"
/**
  *_sqrt - find square root of number
  *@x: interger to find sqrt
  *@y: root to check
  *Return: square root or -1
  */
int _sqrt(int x, int y)
{
	if ((y * y) == x)
	{
		return (y);
	}

	if (y == x / 2)
	{
		return (-1);
	}
	return (_sqrt(x, y + 1));
}

/**
  *_sqrt_recursion - return natural square root of a number
  *@n: given  integer
  *Return: square root or -1
  */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (_sqrt(n, y));
}
