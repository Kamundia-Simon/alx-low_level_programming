#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @x: the integer to check
 * Return: the absolute value
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
	_putchar('\n');
}
