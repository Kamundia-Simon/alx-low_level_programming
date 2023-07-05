#include "main.h"
/**
  *_pow_recursion - function that returnd value of a power
  *@x: integer value
  *@y: power
  *Return: -1 and result
  */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
